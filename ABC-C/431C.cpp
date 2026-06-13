#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long N,M,K;
    cin>>N>>M>>K;
    vector<long long> H(N);
    vector<long long> B(M);
    for(int i=0;i<N;i++){
        cin>>H[i];
    }
    for(int i=0;i<M;i++){
        cin>>B[i];
    }
    sort(H.begin(),H.end());
    sort(B.begin(),B.end());
    long long n=0,m=0,k=0;
    while(n<N && m<M && k<K){
        if(H[n]<=B[m]){
            k++;
            n++;
        }
        m++;
    }
    if(k<K){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}
