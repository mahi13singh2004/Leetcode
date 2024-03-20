class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        long long count=0;
        for(int i=0; i<hours.size(); i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};
