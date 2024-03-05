class Solution {
public:
    void moveZeroes(vector<int>&array) {
        int N=array.size();
        int j=-1;
        for(int i=0; i<N; i++){
            if(array[i]==0){
                j=i;
                break;
            }
        }

        if(j==-1){
            for(int i=0; i<N; i++){
                cout<<array[i]<<" ";
            }
        }
        else{
            for(int i=j+1; i<N; i++){
                if(array[i]!=0){
                    swap(array[i],array[j]);
                    j++;
                }
            }
            for(int i=0; i<N; i++){
                cout<<array[i]<<" ";
            }
        }
    }
};
