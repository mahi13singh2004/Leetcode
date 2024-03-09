class Solution {
public:
    int subarraySum(vector<int>&array, int k) {
        int sum=0;
        int count=0;
        for(int i=0;i<array.size();i++){
            sum=0;
            for(int j=i; j<array.size(); j++){
                sum=sum+array[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};
