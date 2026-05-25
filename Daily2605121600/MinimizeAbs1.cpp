#include <iostream>
#include <vector>

using namespace std;

int main(){
    long N;
    long long L,R;
    cin>>N>>L>>R;
    vector<long> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        if(A[i]<=L){
            cout<<L<<" ";
        }else if(A[i]>=R){
            cout<<R<<" ";
        }else{
            cout<<A[i]<<" ";
        }
    }
    return 0;
}