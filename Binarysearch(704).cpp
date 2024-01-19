class Solution {
public:
    int search(vector<int>& array, int key) {
        int length=array.size();
        int start=0;
        int end=length-1;

        while(start<=end){
            int middle=(start+end)/2;
            if(key==array[middle]){
                return middle;
            }
            else if(key>array[middle]){
                start=middle+1;
            }
            else{
                end=middle-1;
            }
        }
        return -1;
    }
};