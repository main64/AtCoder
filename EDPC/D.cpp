#include <iostream>
#include <vector>

using namespace std;

void print_ww(vector<vector<long long>> dp,int N,int W);

int main(){
    int N,W;
    cin>>N>>W;
    vector<int> v(N),w(N);
    for(int n=0;n<N;n++){
        cin>>w[n]>>v[n];
    }
    vector<vector<long long>> dp(N,vector<long long>(W+1));
    for(int i=0;i<=W;i++){
        if(i<w[0]){
            dp[0][i]=0;
        }else{
            dp[0][i]=v[0];
        }
    }

    for(int n=1;n<N;n++){
        dp[n][0]=0;
        for(int i=0;i<=W;i++){
            if(i+w[n]<=W){
                dp[n][i+w[n]]=max(dp[n-1][i+w[n]],dp[n-1][i]+v[n]);
            }
        }
        print_ww(dp,N,W);
    }

    long long max_v=0;
    for(int i=0;i<=W;i++){
        max_v=max(max_v,dp[N-1][i]);
    }
    cout<<max_v;
    return 0;

}


void print_ww(vector<vector<long long>> dp,int N,int W){
    cout<<endl;
    for(int n=0;n<N;n++){
        for(int i=0;i<=W;i++){
            cout<<dp[n][i]<<" ";
        }
        cout<<endl;
    }
}