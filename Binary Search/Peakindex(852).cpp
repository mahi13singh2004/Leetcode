class Solution {
public:
    int peakIndexInMountainArray(vector<int>&array) {
        int start=0; int end=array.size()-1; int answer=0;
        while(start<=end){
            int mid=end+(start-end)/2;
            if(array[mid]>array[mid-1] && array[mid]>array[mid+1]){
                answer=mid;
                break;
            }
            else if(array[mid]>array[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return answer;
    }
};