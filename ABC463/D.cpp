#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(n,N) for(long long n=0;n<N;n++)
#define vv(kata) vector<vector<kata>>

void print_map(vector<vector<ll>> A){
    cout<<endl;
    rep(i,A.size()){
        rep(j,A[i].size()){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    
    return 0;
}