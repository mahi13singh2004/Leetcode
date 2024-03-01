class Solution {
public:

    int find_min(vector<int>array){
        int minimum=INT_MAX;
        for(int i=0; i<array.size(); i++){
            if(array[i]<minimum){
                minimum=min(array[i],minimum);
            }
        }
        return minimum;
    }

    int find_max(vector<int>array){
        int maximum=INT_MIN;
        for(int i=0; i<array.size(); i++){
            if(array[i]>maximum){
                maximum=max(array[i],maximum);
            }
        }
        return maximum;
    }

    bool find_possible(vector<int>array, int mid, int M, int K){
        int counter=0;
        int b=0;
        for(int i=0; i<array.size(); i++){
            if(array[i]<=mid){
                counter++;
            }
            else{
                b=b+(counter/K);
                counter=0;
            }
        }
        b=b+(counter/K);
        if(b>=M){
            return true;
        }
        else{
            return false;
        }
    }

    int minDays(vector<int>&array, int M, int K) {
        int start=find_min(array);
        int end=find_max(array);
        int answer=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            bool solution=find_possible(array,mid,M,K);
            if(solution==true){
                answer=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return answer;
    }
};
