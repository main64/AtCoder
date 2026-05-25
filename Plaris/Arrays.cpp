#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int A[200000];
    int L[N];
    L[0]=0;
    for(int i=0;i<N;i++){
        int l;
        cin>>l;
        L[i+1]=L[i]+l;
        for(int j=0;j<l;j++){
            cin>>A[L[i]+j];
        }
    }

    int X,Y;
    cin>>X>>Y;
    cout<<A[L[X-1]+Y-1];
    return 0;
}