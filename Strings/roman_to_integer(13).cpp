class Solution {
public:

    int pass(char s){
        if(s=='I'){
            return 1;
        }
        else if(s=='V'){
            return 5;
        }
        else if(s=='X'){
            return 10;
        }
        else if(s=='L'){
            return 50;
        }
        else if(s=='C'){
            return 100;
        }
        else if(s=='D'){
            return 500;
        }
        else{
            return 1000;
        }
    }


    int romanToInt(string s) {
        int index=0;
        int sum=0;
        while(index<s.size()-1){
            if(pass(s[index])<pass(s[index+1])){
                sum=sum-pass(s[index]);
            }
            else{
                sum=sum+pass(s[index]);
            }
            index++;
        }
        sum=sum+pass(s[s.size()-1]);
        return sum;
    }
};
