#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(n,N) for(long long n=0;n<N;n++)
#define vv(kata) vector<vector<kata>>


int main(){
    int N;
    char X;
    cin>>N>>X;
    string temp;
    rep(n,N){
        cin>>temp;
        if(temp[X-'A']=='o'){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}