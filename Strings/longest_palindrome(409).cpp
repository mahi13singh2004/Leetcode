class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>smaller(26);
        vector<int>larger(26);

        for(int i=0; i<s.size(); i++){
            if(s[i]>='a'){
                smaller[s[i]-'a']+=1;
            }
            else{
                larger[s[i]-'A']+=1;
            }
        }

        int count=0;
        int odd=0;

        for(int i=0; i<26; i++){
            if(smaller[i]%2==0){
                count=count+smaller[i];
            }
            else{
                count=count+(smaller[i]-1);
                odd=1;
            }

            if(larger[i]%2==0){
                count=count+larger[i];
            }
            else{
                count=count+(larger[i]-1);
                odd=1;
            }
        }
        return count+odd;
    }
};
