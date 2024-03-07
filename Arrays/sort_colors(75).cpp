#include <bits/stdc++.h> 
void sortArray(vector<int>& array, int n)
{
    int start=0;
    int mid=0;
    int end=n-1;
    while(mid<=end){
        if(array[mid]==0){
            swap(array[mid],array[start]);
            start++;
            mid++;
        }
        else if(array[mid]==1){
            mid++;
        }
        else{
            swap(array[mid],array[end]);
            end--;
        }
    }
}
