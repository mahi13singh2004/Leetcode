class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int start=0; int end=x; int answer=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==x/mid){
                answer=mid;
                break;
            }
            else if(mid>x/mid){
                end=mid-1;
            }
            else{
                answer=mid;
                start=mid+1;
            }
        }
        return answer;
    }
};