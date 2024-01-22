class Solution {
public:
    int search(vector<int>& array, int key) {
        int start=0; int end=array.size()-1; int answer=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(array[mid]==key){
                answer=mid;
                break;
            }
            else if(array[mid]>=array[0]){
                if(key>=array[0] && key<array[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(array[mid]<key && array[end]>=key){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return answer;
    }
};