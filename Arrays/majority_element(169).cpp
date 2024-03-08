class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
        int count=0;

        for(int i=0; i<nums.size(); i++){
            if(count==0){
                element=nums[i];
                count++;
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }

        int count2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==element){
                count2++;
            }
        }
        
        return element;
    }
};
