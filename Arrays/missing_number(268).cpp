class Solution {
public:
    int missingNumber(vector<int>& array) {
        int N=array.size();
        int maximum=0;
        bool zero_present=false;
        for(int i=0; i<array.size(); i++){
            if(array[i]>maximum){
                maximum=max(array[i],maximum);
            }
        }

        int correct_sum=(maximum*(maximum+1))/2;
        int sum=0;

        for(int i=0; i<array.size(); i++){
            sum=sum+array[i];
        }

        for(int i=0; i<array.size(); i++){
            if(array[i]==0){
                zero_present=true;
                break;
            }
        }

        int answer=correct_sum-(sum);
        
        if(zero_present==false){
            return 0;
        }
        else if(correct_sum==sum){
            return maximum+1;
        }
        else{
            return answer;
        }
    }
};
