class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>copy(nums.size());
        for(int i=0; i<nums.size(); i++){
            copy[i]=nums[nums[i]];
        }

        return copy;
    }
};
