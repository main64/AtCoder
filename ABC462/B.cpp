#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<vector<int>> A(N);
    for(int n=0;n<N;n++){
        int K;
        cin>>K;
        for(int k=0;k<K;k++){
            int a;
            cin>>a;
            A[a-1].push_back(n+1);
        }
    }

    for(int n=0;n<N;n++){
        cout<<A[n].size()<<" ";
        for(int m=0;m<A[n].size();m++){
            cout<<A[n][m]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}