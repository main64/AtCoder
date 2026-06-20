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
    ll A,D;
    cin>>A>>D;
    if(A<=D){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}