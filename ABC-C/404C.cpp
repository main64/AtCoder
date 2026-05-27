#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long N,M;
    cin>>N>>M;
    vector<vector<long long>> E(N);
    for(int n=0;n<N;n++){
        E[n].resize(2,-1);
    }
    long long A,B;
    for(int i=0;i<M;i++){
        cin>>A>>B;
        A--,B--;
        if(E[A][0]==-1){
            E[A][0]=B;
        }else if(E[A][1]==-1){
            E[A][1]=B;
        }else{
            cout<<"No";
            return 0;
        }
        if(E[B][0]==-1){
            E[B][0]=A;
        }else if(E[B][1]==-1){
            E[B][1]=A;
        }else{
            cout<<"No";
            return 0;
        }
    }
    set<long long> s;
    s.insert(0);
    long long vertex=E[0][0];
    long long prevertex=0;
    while(vertex!=0){
        if(vertex==-1){
            cout<<"No";
            return 0;
        }
        s.insert(vertex);
        if(E[vertex][0]==prevertex){
            prevertex=vertex;
            vertex=E[vertex][1];
        }else{
            prevertex=vertex;
            vertex=E[vertex][0];
        }
    }
    for(int n=0;n<N;n++){
        if(s.count(n)!=1){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}