#include <iostream>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int A[M];
    for(int a=0;a<M;a++){
        cin>>A[a];
    }
    int last_m=0;
    for(int i=1;i<=N;i++){
        cout<<A[last_m]-i<<endl;
        if(A[last_m]-i==0){
            last_m++;
        }
    }
    return 0;
}