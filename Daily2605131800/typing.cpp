#include <iostream>
#include <string>

using namespace std;

int main(){
    string S,T;
    cin>>S>>T;
    int si=0;
    int ti=0;
    for(ti=0;ti<T.length();ti++){
        if(S[si]==T[ti]){
            cout<<ti+1<<" ";
            si++;
        }
    }
    return 0;
}