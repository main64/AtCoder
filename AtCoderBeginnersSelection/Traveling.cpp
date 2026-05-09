#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int N=0;
    cin>>N;
    int t[N+1],x[N+1],y[N+1];
    t[0]=0;
    x[0]=0;
    y[0]=0;
    for(int n=1;n<N+1;n++){
        cin>>t[n]>>x[n]>>y[n];
    }
    int diff;
    for(int n=0;n<N;n++){
        diff=abs(x[n+1]-x[n])+abs(y[n+1]-y[n]);
        if(diff>t[n+1]-t[n] || (t[n+1]-t[n]-diff)%2==1){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}