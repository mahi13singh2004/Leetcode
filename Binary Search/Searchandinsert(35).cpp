class Solution {
public:
    int searchInsert(vector<int>& array, int key) {
        int left=0; int right=array.size()-1; int answer=array.size();
        while(left<=right){
            int mid=left+(right-left)/2;
            if(array[mid]==key){
                answer=mid;
                break;
            }
            else if(array[mid]>key){
                answer=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return answer;
    }
};