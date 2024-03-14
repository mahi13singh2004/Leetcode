class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='*';
            }
            else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='*';
            }
        }

        string vowels;

        for(int i=0;i<26; i++){
            char c='A'+i;
            while(upper[i]>0){
                vowels+=c;
                upper[i]--;
            }
        }

        for(int i=0;i<26; i++){
            char c='a'+i;
            while(lower[i]>0){
                vowels+=c;
                lower[i]--;
            }
        }

        int vowel_index=0;
        int string_index=0;

        while(vowel_index<vowels.size()){
            if(s[string_index]=='*'){
                s[string_index]=vowels[vowel_index];
                vowel_index++;
            }
            string_index++;
        }

        return s;
    }
};
