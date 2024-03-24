class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long update=x;

        while(x>0){
            int last=x%10;
            rev=rev*10+last;
            x=x/10;
        }
        if(rev==update){
            return true;
        }
        else{
            return false;
        }
    }
};
