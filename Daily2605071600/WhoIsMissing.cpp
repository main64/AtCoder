#include <iostream>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int A[M];
    int B[N];
    int count=0;
    for(int i=0;i<N;i++){
        B[i]=0;
    }
    for(int i=0;i<M;i++){
        cin>>A[0];
        if(B[A[0]-1]==0){
            count++;
            B[A[0]-1]=1;
        }
    }
    cout<<N-count<<endl;
    for(int j=0;j<N;j++){
        if(B[j]==0){
            cout<<j+1<<" ";
        }
    }
    return 0;
}