#include <iostream>

using namespace std;

int main(){
    long long N;
    cin>>N;
    int count=0;
    while(N>1){
        N/=2;
        int i=1;
        while(i*i<=N){
            i+=2;
        }
        count+=(i-1)/2;
    }
    cout<<count;
    return 0;
}