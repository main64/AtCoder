#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    cin>>S;
    int count=S.length();
    int i=0,j=0;
    while(j<S.length()-1){
        j++;
        if(S[j]!=S[j-1]){
            count+=j-i;
        }else{
            i=j ;
        }
    }
    cout<<count;
    return 0;
}