#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<int>> uv(N);
    vector<vector<int>> dikusutora(N);
    int u,v;
    for(int i=0;i<M;i++){
        cin>>u>>v;
        uv[u-1].push_back(v-1);
        uv[v-1].push_back(u-1);
    } 
    for(int n=0;n<N;n++){
        dikusutora[n].resize(N);
        
    }
}