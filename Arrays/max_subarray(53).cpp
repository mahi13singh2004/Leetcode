class Solution {
public:
    int maxSubArray(vector<int>&array) {
        int maxi=INT_MIN;
        int sum=0;

        for(int i=0; i<array.size(); i++){
            sum=sum+array[i];

            if(sum>maxi){
                maxi=sum;
            }

            if(sum<0){
                sum=0;
            }
        }

        return maxi;
    }
};
