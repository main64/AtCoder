#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long N,Q;
    cin>>N>>Q;
    vector<long long > A(N);
    vector<long long > B(N);
    long long min_sum=0;
    for(int n=0;n<N;n++){
        cin>>A[n];
    }
    for(int n=0;n<N;n++){
        cin>>B[n];
    }
    for(int n=0;n<N;n++){
        min_sum+=(long long)(min(A[n],B[n]));
    }
    char c;
    long long X,V;
    for(int q=0;q<Q;q++){
        cin>>c>>X>>V;
        min_sum-=(long long)(min(A[X-1],B[X-1]));
        if(c=='A'){
            A[X-1]=V;
            
        }else{

            B[X-1]=V;
        }
        min_sum+=(long long)(min(A[X-1],B[X-1]));
        cout<<min_sum<<endl;

    }
    return 0;
}