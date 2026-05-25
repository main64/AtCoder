#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    long long  N;
    cin>>N;
    vector<vector<long long >> LR(N);
    vector<long long> X(N);
    int Lsum=0,Rsum=0,Xsum=0;
    for(int i=0;i<N;i++){
        LR[i].resize(2);
        cin>>LR[i][0]>>LR[i][1];
        Lsum+=LR[i][0];
        Rsum+=LR[i][1];
        X[i]+=LR[i][0];
        Xsum+=X[i];
    }
    if(Lsum>0 || Rsum<0){
        cout<<"No";
        return 0;
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<N;i++){
        int D=min(int(LR[i][1]-LR[i][0]),-Xsum);
        X[i]+=D;
        Xsum+=D;
        cout<<X[i]<<" ";
    }
    return 0;
}