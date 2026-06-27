#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N),B(N),C(N);
    for(int n=0;n<N;n++){
        cin>>A[n]>>B[n]>>C[n];
    }
    vector<array<int,3>> dp(N,{0,0,0});
    dp[0][0]=A[0];
    dp[0][1]=B[0];
    dp[0][2]=C[0];
    for(int n=0;n+1<N;n++){
        dp[n+1][0]=max(dp[n][1],dp[n][2])+A[n+1];
        dp[n+1][1]=max(dp[n][0],dp[n][2])+B[n+1];
        dp[n+1][2]=max(dp[n][0],dp[n][1])+C[n+1];
    }
    cout<<max({dp[N-1][0],dp[N-1][1],dp[N-1][2]});
    return 0;
}