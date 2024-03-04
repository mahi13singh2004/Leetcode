#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& array, int K) {
        int N=array.size();
        K=K%N;

        int temp[1000001];

        if(K==0){
            for(int i=0; i<N; i++){
                cout<<array[i]<<" ";
            }
        }

        for(int i=N-K; i<N; i++){
            temp[i-(N-K)]=array[i];
        }

        for(int i=N-K-1; i>=0; i--){
            array[i+K]=array[i];
        }

        for(int i=0; i<K; i++){
            array[i]=temp[i];
        }
        
        for(int i=0; i<N; i++){
            cout<<array[i]<<" ";
        }
    }
};

//MORE OPTIMAL
//D=D%N;
//reverse(array.begin(),array.end());
//reverse(array.begin(),array.begin()+D);
//reverse(array.begin()+D,array.end());
