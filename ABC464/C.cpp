#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct change_col{
    int date;
    int before;
    int after;
};
vector<struct change_col> changes;

int main(){
    int N,M;
    cin>>N>>M;
    changes.resize(N);
    vector<int> num_col(N);
    vector<pair<int,int>> changes_index(N);
    for(int i=0;i<N;i++){
        cin>>changes[i].before>>changes[i].date>>changes[i].after;
        num_col[changes[i].before-1]++;
        changes_index[i]={changes[i].date , i};
    }
    sort(changes_index.begin(),changes_index.end());
    int ans=0;
    for(int i=0;i<N;i++){
        if(num_col[i]!=0){
            ans++;
        }
    }
    int index=0;
    for(int m=0;m<M;m++){
        while(changes_index[index].first<=m+1 && index<N){
            num_col[changes[changes_index[index].second].before-1]--;
        if(num_col[changes[changes_index[index].second].before-1]==0){
            ans--;
        }
        num_col[changes[changes_index[index].second].after-1]++;
        if(num_col[changes[changes_index[index].second].after-1]==1){
            ans++;
        }
        index++;
        }
        cout<<ans<<endl;
    }
    return 0;

}