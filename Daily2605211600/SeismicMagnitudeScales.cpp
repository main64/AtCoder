#include <iostream>

using namespace std;

int main(){
    int A,B;
    cin>>A>>B;
    int ans=1;
    for(int i=0;i<(A-B);i++){
        ans*=32;
    }
    cout<<ans;
    return 0;
}