#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long N;
    cin>>N;
    vector<pair<long long,long long >>  XY(N);
    for(long long n=0;n<N;n++){
        cin>>XY[n].first>>XY[n].second;
    }
    sort(XY.begin(),XY.end());
    long long ans=0;
    vector<long long> Y;
    for(long long n=0;n<N;n++){
        long long y=XY[n].second;
        
        sort(Y.begin(),Y.begin()+n);
        auto lower=lower_bound(Y.begin(),Y.begin()+n,y);
        if(distance(Y.begin(),lower)==0){ //X<xの範囲で存在しないなら
            ans++;
        }
        Y.push_back(y);
    }
    cout<<ans;
    return 0;
}