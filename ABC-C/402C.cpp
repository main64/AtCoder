#include <iostream>
#include <vector>

using namespace std;

int main(){
    long N,M;
    cin>>N>>M;
    vector<long> K(M);
    vector<vector<long>> A(M);
    vector<long> B(N);
    vector<int> numOK(N);
    for(int i=0;i<M;i++){
        cin>>K[i];
        A[i].resize(K[i]);
        for(int k=0;k<K[i];k++){
            cin>>A[i][k];
        }
    }
    for(int n=0;n<N;n++){
        cin>>B[n];
        for(int i=0;i<M;i++){
            for(int k=0;k<K[i];k++){
                if(A[i][k]==B[n]){
                    A[i][k]=A[i][K[i]-1];
                    K[i]--;
                    k=K[i];
                }
        }
        if(K[i]==0){
            numOK[n]++;
        }
        }
    }

    for(int i=0;i<N;i++){
        cout<<numOK[i]<<endl;
    }
    return 0;
    }


