#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    vector<int> version(N+1);
    for(int n=1;n<=N;n++){
        version[n]=n;
    }
    int X,Y;
    int preY=0;
    int i=0;
    for(int q=0;q<Q;q++){
        cin>>X>>Y;
        int change=version[X];
        cout<<change<<endl;
        i=preY;
        while(i<=X){
            version[i]=0;
            i++;
        }
        while(i<Y){
            version[i]-=change;
            i++;
        }
        preY=X;
        
    }
    return 0;
}