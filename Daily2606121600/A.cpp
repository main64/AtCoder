#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,A,B;
    cin>>N>>A>>B;
    for(int i=1;i<=N;i++){
        int temp;
        cin>>temp;
        if(temp==A+B){
            cout<<i;
            return 0;
        }
    }
}