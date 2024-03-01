#include<bits/stdc++.h>
#include<algorithm>

class Solution {
public:

    int max(int a,int b){
        if(a>=b){
            return a;
        }
        else{
            return b;
        }
    }

    int find_max(vector<int>array){
        long long solution=INT_MIN;
        for(int i=0; i<array.size();i++){
            if(array[i]>solution){
                solution=max(solution,array[i]);
            }
        }
        return solution;
    }

    bool find_possible(vector<int>array, int mid, int limit){
        long long solution=0;
        for(int i=0; i<array.size(); i++){
            solution=solution+ceil((double)array[i]/(double)mid);
        }
        if(solution<=limit){
            return true;
        }
        else{
            return false;
        }
    }

    int smallestDivisor(vector<int>array, int limit) {
        int key=0;
        int start=1;
        int end=find_max(array);
        while(start<=end){
            int mid=start+(end-start)/2;
            bool answer=find_possible(array,mid,limit);
            if(answer==true){
                key=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return key;
    }
};
