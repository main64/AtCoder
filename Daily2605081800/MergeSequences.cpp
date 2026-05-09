#include <iostream>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int A[N],B[M],C[N+M];

    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int j=0;j<M;j++){
        cin>>B[j];
    }

    int i=0,j=0;
    while(i+j<N+M){
        if(i>=N){
            B[j]=i+j+1;
            j++;
        }else if(j>=M){
            A[i]=i+j+1;
            i++;
        }else{
            if(A[i]<B[j]){
            A[i]=i+j+1;
            i++;
        }else{
            B[j]=i+j+1;
            j++;
        }
        }
        
    }

    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<M;j++){
        cout<<B[j]<<" ";
    }
    return 0;
}