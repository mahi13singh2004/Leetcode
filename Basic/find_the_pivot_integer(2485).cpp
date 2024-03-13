class Solution {
public:
    int pivotInteger(int n) {
        int answer=-1;
        int sum1=0;
        int sum2=0;
        int sum2n=0;
        for(int i=1; i<=n; i++){
            sum1=(i*(i+1))/2;
            sum2=(n*(n+1))/2;
            sum2n=sum2-sum1+i;
            if(sum1==sum2n){
                return i;
            }
        }
        return -1;
    }
};
