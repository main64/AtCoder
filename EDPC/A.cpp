#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N;
  cin>>N;
  vector<int > h(N);
  for(int n=0;n<N;n++){
    cin>>h[n];
  }
  vector<long long> dp(N,LLONG_MAX);
	dp[0]=0;
  for(int i=0;i+1<N;i++){
    int cost=abs(h[i+1]-h[i]);
    dp[i+1]=min(dp[i+1],dp[i]+cost);
    if(i+2<N){
      cost=abs(h[i+2]-h[i]);
      dp[i+2]=min(dp[i+2],dp[i]+cost);
    }
  }
  cout<<dp[N-1];
  return 0;
}
