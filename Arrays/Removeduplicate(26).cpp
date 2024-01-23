#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& array) {
        int length=array.size();
        int i=0;
        for(int j=0; j<length; j++){
            if(array[i]!=array[j]){
                array[i+1]=array[j];
                i++;
            }
        }
        return i+1;
    }
};