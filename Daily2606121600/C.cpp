#include <iostream>
#include <vector>


using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<int>> edge(N);
    for(int i=0;i<M;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    for(int i=0;i<N;i++){
        edge[i].push_back(-1);
    }
    int ans=0;
    for(int i=0;i<N;i++){

        for(int j=0;j<edge[i].size()-1;j++){
            for(int k=j+1;k<edge[i].size()-1;k++){
                if(find(edge[edge[i][j]].begin(),edge[edge[i][j]].end(),edge[i][k])!=edge[edge[i][j]].end()){
                    ans++;
                }
            }
            

        }
    }
    cout<<ans/3;
    return 0;
}
