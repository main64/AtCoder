#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(n,N) for(long long n=0;n<N;n++)
#define vv(kata) vector<vector<kata>>

int main(){
    int X,Y;
    cin>>X>>Y;
    if(X*9==Y*16){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}