//BETTER==BINARY SEARCH
#include<vector>

int getSingleElement(vector<int> &array){
		int start=0;
    int end=array.size()-1;
    if(array[end]==0){
      return 0;
    }
    else if(array[0]!=array[1]){
      return array[0];
    }
    else if(array[end]!=array[end-1]){
      return array[end];
    }

    while(start<=end){
      int mid=start+(end-start)/2;
      if(array[mid]!=array[mid-1] && array[mid]!=array[mid+1]){
        return array[mid];
      }
      else if(((mid%2==0) && array[mid]==array[mid+1])||((mid%2!=0) && array[mid]==array[mid-1])){
        start=mid+1;
      }
      else{
        end=mid-1;
      }
    }
}


//OPTIMAL
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;
        for(int i=0; i<nums.size(); i++){
            answer=answer^nums[i];
        }
        return answer;
    }
};
