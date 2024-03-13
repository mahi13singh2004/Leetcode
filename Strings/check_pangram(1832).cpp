class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>array(26);
        for(int i=0; i<s.size(); i++){
            array[s[i]-'a']+=1;
        }

        for(int i=0; i<26; i++){
            if(array[i]==0){
                return false;
            }
        }
        return true;
    }
};
