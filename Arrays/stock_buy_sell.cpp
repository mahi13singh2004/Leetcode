class Solution {
public:
    int maxProfit(vector<int>&array) {
        int max_profit=0;
        int minimum=array[0];
        for(int i=0; i<array.size(); i++){
            int cost=array[i]-minimum;
            max_profit=max(max_profit,cost);
            minimum=min(minimum,array[i]);
        }
        return max_profit;
    }
};
