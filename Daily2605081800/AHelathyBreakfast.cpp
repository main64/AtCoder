#include <iostream>
#include <string>
using namespace std;


int main(){
    string temp;
    int isLeftRice=0;
    cin>>temp;
    for(int i=0;i<2;i++){
        if(temp[i]=='R'){
            isLeftRice=1;
        }else if(temp[i]=='M' && isLeftRice==0){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}