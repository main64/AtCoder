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
    int H,W,K;
    cin>>H>>W>>K;
    vector<vector<int>> S(H);
    rep(h,H){
        string temp;
        cin>>temp;
        rep(w,W){
            S[h][w]=temp[w]-'0';
        }
    }
    ll ans=0;
    rep(h,H){
        if(h==0) h++;
        rep(w,W){
            
        }
    }
}