#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N,M;
    cin>>N>>M;
    //vector<long long> L(M),R(M);
    long long L,R;
    vector<long> W(N);
    for(int m=0;m<M;m++){
        //cin>>L[m]>>R[m];
        cin>>L>>R;
        for(int i=L-1;i<R;i++){
            W[i]++;
        }
    }

    int min=M;
    for(int n=0;n<N;n++){
            if(W[n]<min){
                min=W[n];
            }
        }
    cout<<min;
    return 0;
}