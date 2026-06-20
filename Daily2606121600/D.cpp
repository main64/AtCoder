#include <iostream>
#include <string>

using namespace std;

int main(){
    int N,M;
    string S,T;
    cin>>N>>M>>S>>T;
    int isPre=1,isSuf=1;
    for(int i=0;i<N;i++){
        if(S[i]!=T[i]){
            i=N;
            isPre=0;
        }
    }
    for(int i=1;i<=N;i++){
        if(S[N-i]!=T[M-i]){
            i=N;
            isSuf=0;
        }
    }
    if(isSuf==0){
        if(isPre==0){
            cout<<3;
        }else{
            cout<<1;
        }
    }else{
        if(isPre==0){
            cout<<2;
        }else{
            cout<<0;
        }
    }
    return 0;
}