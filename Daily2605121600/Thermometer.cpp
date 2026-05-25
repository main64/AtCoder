#include <iostream>

using namespace std;

int main(){
    float X;
    cin>>X;
    if(X<37.5){
        cout<<3;
    }else if(X>=38.0){
        cout<<1;
    }else{
        cout<<2;
    }
    return 0;
}