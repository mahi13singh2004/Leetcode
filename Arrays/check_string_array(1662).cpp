class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string answer1;
        string answer2;
        for(int i=0; i<word1.size(); i++){
            answer1=answer1+word1[i];
        }

        for(int i=0; i<word2.size(); i++){
            answer2=answer2+word2[i];
        }

        if(answer1==answer2){
            return true;
        }
        else{
            return false;
        }
    }
};
