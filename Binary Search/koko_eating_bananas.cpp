class Solution {
public:

    long long find_hourly(vector<int>array, int mid, int H){
        long long answer=0;
        for(long long i=0; i<array.size(); i++){
            answer=answer+ceil((double)array[i]/(double)mid);
        }
        return answer;
    }

    int find_end(vector<int>array){
        int maximum=array[0];
        for(int i=0; i<array.size(); i++){
            if(array[i]>maximum){
                maximum=max(maximum, array[i]);
            }
        }
        return maximum;
    }


    int minEatingSpeed(vector<int>&array, int H) {
        long long start=1;
        long long end=find_end(array);
        long long solution=0;
        while(start<=end){
            long long mid=(start+end)/2;
            long long hourly=find_hourly(array,mid,H);
            if(hourly<=H){
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
