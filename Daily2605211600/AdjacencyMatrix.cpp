#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<vector<int>> A(N);
    int temp;
    int a_index=0;
    for(int i=0;i<N;i++){
        a_index=0;
        A[i].resize(N);
        for(int j=0;j<N;j++){
            cin>>temp;
            if(temp==1){
                A[i][a_index++]=j+1;
            }
        }
        A[i].resize(a_index);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<A[i].size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}