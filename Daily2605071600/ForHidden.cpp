#include <iostream>
#include <string>

using namespace std;

int main(){
    string T,U;
    cin>>T>>U;
    int t=0;
    int u=0;
    while(t<=(T.length()-U.length())){
        if(T[t+u]=='?' || T[t+u]==U[u]){
            u++;
            if(u==U.length()){
                cout<<"Yes";
                return 0;
            }
        }else{
            u=0;
            t++;
        }
    }
    cout<<"No";
    return 0;
}