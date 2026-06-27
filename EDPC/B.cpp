#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N,K;
  cin>>N>>K;
  vector<int > h(N);
  for(int n=0;n<N;n++){
    cin>>h[n];
  }
  vector<long long> dp(N,LLONG_MAX);
	dp[0]=0;
  for(int i=0;i+1<N;i++){
    for(int k=1;k<=K;k++){
        if(i+k<N){
       int cost=abs(h[i+k]-h[i]);
      dp[i+k]=min(dp[i+k],dp[i]+cost);
    }else{
        k=K;
    }
    } 
  }
  cout<<dp[N-1];
  return 0;
}
