#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    long long X,Y;
    cin>>N>>X>>Y;
    vector<long long> A(N);
    long long minA=1<<30;
    for(int i=0;i<N;i++){
        cin>>A[i];
        if(minA>A[i]){
            minA=A[i];
        }
    }
    long long P=minA*Y;
    long long sum_big=0;
    for(int i=0;i<N;i++){
        if((Y*A[i]-P)%(Y-X)!=0){
            cout<<"-1";
            return 0;
        }else{
            int n=A[i]-(Y*A[i]-P)/(Y-X);
            if(n>A[i]){
                cout<<"-1";
                return 0;
            }
            sum_big+=n;
        }
    }
    cout<<sum_big;

    return 0;
}

/*X*n+Y*(A-n)=P
(X-Y)*n+Y*A=P
Y*A-P=(Y-X)*n*/