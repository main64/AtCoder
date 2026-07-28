#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M;

    cin>>N>>M;
    vector<int> max_c(M,-1);
    int c,s;
    for(int i=0;i<N;i++){
        cin>>c>>s;
        max_c[c-1]=max(max_c[c-1],s);
    }
    for(int i=0;i<M;i++){
        cout<<max_c[i]<<" ";
    }
    return 0;
}