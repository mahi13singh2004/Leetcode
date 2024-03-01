class Solution {
public:

    int find_max(vector<int>array){
        int maximum=INT_MIN;
        for(int i=0; i<array.size(); i++){
            if(array[i]>maximum){
                maximum=max(array[i],maximum);
            }
        }
        return maximum;
    }

    int find_sum(vector<int>array){
        int sum=0;
        for(int i=0; i<array.size(); i++){
            sum=sum+array[i];
        }
        return sum;
    }

    bool find(vector<int>array, int mid, int days_given){
        int day=1;
        int load=0;
        for(int i=0; i<array.size(); i++){
            if(array[i]+load>mid){
                day++;
                load=array[i];
            }
            else{
                load=load+array[i];
            }
        }
        if(day<=days_given){
            return true;
        }
        else{
            return false;
        }
    }
        
    int shipWithinDays(vector<int>&array, int days) {
        int start=find_max(array);
        int end=find_sum(array);
        int solution=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            bool answer=find(array,mid,days);
            if(answer==true){
                solution=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return solution;
    }
};
