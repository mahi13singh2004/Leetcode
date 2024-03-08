int longestSubarrayWithSumK(vector<int>array, long long k) {
    int sum=0;
    int maxi=INT_MIN;
    int start=0;
    int start_ans=-1;
    int end_ans=-1;

    for(int i=0; i<k; i++){
        if(sum==0){
            start=i;
        }
        sum=sum+array[i];

        if(sum>maxi){
            maxi=sum;
            start_ans=start;
            end_ans=i;

        }

        if(sum<0){
            sum=0;
        }
    }
    return end-start+1;
}
