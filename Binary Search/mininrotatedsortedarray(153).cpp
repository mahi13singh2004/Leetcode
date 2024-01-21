class Solution {
public:
    int findMin(vector<int>& array) {
        int start=0; int end=array.size()-1; int answer=array[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(array[mid]>=array[0]){
                start=mid+1;
            }
            else{
                answer=array[mid];
                end=mid-1;
            }
        }
        return answer;
    }
};