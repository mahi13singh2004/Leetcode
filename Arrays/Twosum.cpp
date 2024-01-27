#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0; int end=numbers.size()-1; int answer1=0; int answer2=0;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                answer1=start;
                answer2=end;
                break;
            }
            else if(numbers[start]+numbers[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        vector<int>mahi(2);
        mahi[0]=answer1+1;
        mahi[1]=answer2+1;
        return mahi;
    }
};