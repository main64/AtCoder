#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long  N,K;
    cin >> N>>K;
    K-=1;
    vector<vector<long long>> A(N);
    vector<long long> L(N);
    for(int i=0;i<N;i++){
        cin>>L[i];
        A[i].resize(L[i]);
        for(int j=0;j<L[i];j++){
            cin>>A[i][j];
        }
    }
    vector<long long> C(N);
    for(int i=0;i<N;i++){
        cin>>C[i];
    }
    long lengthOfB=0;
    int i=0;
    while(lengthOfB+L[i]*C[i]<=K){
        lengthOfB+=L[i]*C[i];
        i++;
    }
    cout<<A[i][(K-lengthOfB)%L[i]];
    return 0;
}