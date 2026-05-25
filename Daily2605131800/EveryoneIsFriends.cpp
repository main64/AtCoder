#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<int>> x(M);
    vector<int> k(M);
    int map[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                map[i][j]=1;
            }else{
                map[i][j]=0;
            }
        }
    }
    
    for(int i=0;i<M;i++){
        cin>>k[i];
        x[i].resize(k[i]);
        for(int j=0;j<k[i];j++){
            cin>>x[i][j];
        }
    }
    for(int i=0;i<M;i++){
        for(int kx=0;kx<k[i]-1;kx++){
            for(int j=kx+1;j<k[i];j++){
                map[x[i][kx]-1][x[i][j]-1]=1;
                map[x[i][j]-1][x[i][kx]-1]=1;
            }
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(map[i][j]==0){
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}