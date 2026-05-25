#include <iostream>

using namespace std;

int main(){
    int X,Y,N;
    int sum=0;
    cin >>X>>Y>>N;
    if(X*3>Y){
        sum+=N/3*Y;
        N%=3;
    }
    sum+=N*X;
    cout << sum;
    return 0;
}