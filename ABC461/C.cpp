#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long
#define rep(n,N) for(long long n=0;n<N;n++)

void print(ll x,int mode){
    cout<<x;
    if(mode==0){
        cout<<" ";
    }else{
        cout<<endl;
    }
    return;
}

int main(){
    ll N,K,M;
    cin>>N>>K>>M;
    vector<ll> maxCV(N);
    vector<ll> allCV;
    ll c,v;
    ll ans=0;
    rep(n,N){
      cin>>c>>v;
      if(maxCV[c-1]<v){
        if(maxCV[c-1]>0) allCV.push_back(maxCV[c-1]);
        maxCV[c-1]=v;
      }else{
        allCV.push_back(v);
      }
    }
    sort(maxCV.begin(),maxCV.end(),[](int a,int b){
        return a>b;
    });
    ans+=(ll)(accumulate(maxCV.begin(),maxCV.begin()+M,0LL));
    maxCV.erase(maxCV.begin(),maxCV.begin()+M);
    allCV.insert(allCV.end(),maxCV.begin(),maxCV.end());
    sort(allCV.begin(),allCV.end(),[](int a,int b){
        return a>b;
    });
    ans+=(ll)(accumulate(allCV.begin(),allCV.begin()+K-M,0LL));
    cout<<ans;
    return 0;
}