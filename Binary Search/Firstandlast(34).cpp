class Solution {
public:
    vector<int> searchRange(vector<int>& array, int key) {
        int left=0; int right=array.size()-1; int first=-1; int last=-1;

        //first
        while(left<=right){
            int mid=left+(right-left)/2;
            if(array[mid]==key){
                first=mid;
                right=mid-1;
            }
            else if(array[mid]>key){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        } 

        //second occ bro
        left=0; right=array.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(array[mid]==key){
                first=mid;
                left=mid+1;
            }
            else if(array[mid]>key){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        } 

        vector<int>name(2);
        name[0]=first;
        name[1]=last;
        return name;

    }
};