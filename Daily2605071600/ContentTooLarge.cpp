#include <iostream>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int temp;
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>temp;
        sum+=temp;
    }
    if(sum>M)cout<<"No";
    else cout<<"Yes";
    return 0;
}