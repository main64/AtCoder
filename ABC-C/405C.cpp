#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N;
    cin>>N;
    vector<int> A(N);
    long long preAsum=0,ans=0;
    for(int n=0;n<N;n++){
        cin>>A[n];
        preAsum+=A[n];
    }
    for(int n=0;n<N;n++){
        preAsum-=A[n];
        ans+=preAsum*A[n];
    }
    cout<<ans;
    return 0;
}