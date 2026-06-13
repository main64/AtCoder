#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N;
    cin>>N;
    vector<long long> A(N);
    long long temp;
    for(int n=0;n<N;n++){
        cin>>temp;
        A[--temp]++;
    }
    long long ans=0;
    for(int n=0;n<N;n++){
        ans+=A[n]*(A[n]-1)/2*(N-A[n]);
    }
    cout<<ans;
    return 0;
}