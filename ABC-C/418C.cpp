#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long N,Q;
    cin>>N>>Q;
    vector<long long> A(N);
    long long sum_A=0,max_A=0;
    vector<long long> step(1000000);
    step[1]=N;
    for(int n=0;n<N;n++){
        cin>>A[n];
        sum_A+=A[n];
        if(max_A<A[n]) max_A=A[n];
        step[A[n]+1]--;
    }
    for(int i=1;i<1000000;i++){
        step[i]+=step[i-1];
    }
    for(int i=1;i<1000000;i++){
        step[i]+=step[i-1];
    }
    /*for(int i=0;i<sum_A;i++){
        cout<<step[i]<<" ";
    }*/
    int B=0;
    for(int q=0;q<Q;q++){
        cin>>B;
        if(B>max_A){
            cout<<-1<<endl;
        }else{
                    cout<<step[B-1]+1<<endl;
        }
    }
    return 0;
}
