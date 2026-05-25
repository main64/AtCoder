#include <iostream>

using namespace std;

int main(){
    int X,Y;
    cin>>X>>Y;
    if(X>=Y){
        cout<<0;
    }else{
        cout<<(Y-X-1)/10+1;
    }
    return 0;
}