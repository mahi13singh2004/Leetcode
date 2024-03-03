class Solution {
public:
    vector<int> targetIndices(vector<int>&array, int target) {
        sort(array.begin(),array.end());
        vector<int>empty;
        for(int i=0; i<array.size(); i++){
            if(array[i]==target){
                empty.push_back(i);
            }
        }
        return empty;
    }
};
