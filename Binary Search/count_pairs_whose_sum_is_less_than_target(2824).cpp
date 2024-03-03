class Solution {
public:
    int countPairs(vector<int>&array, int target) {
        int count=0;
        for(int i=0; i<array.size(); i++){
            for(int j=i+1; j<array.size(); j++){
                if(array[i]+array[j]<target){
                    count++;
                }
            }
        }
        return count;
    }
};
