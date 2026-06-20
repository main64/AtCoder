#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
    ll N;
    cin>>N;
    vector<ll> A(N);
    ll B;
    rep(n,N) cin>>A[n];
    rep(n,N){
        cin>>B;
        if(A[B-1]!=n+1){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}