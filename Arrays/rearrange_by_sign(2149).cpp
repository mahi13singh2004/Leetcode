class Solution {
public:
    vector<int> rearrangeArray(vector<int>&array) {
        int odd=1;
        int even=0;
        vector<int>empty(array.size());

        for(int i=0; i<array.size(); i++){
            if(array[i]>0){
                empty[even]=array[i];
                even+=2;
            }
            else{
                empty[odd]=array[i];
                odd+=2;
            }
        }
        return empty;
    }
};
