#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N,R;
    cin>>N>>R;
    vector<int> L(N);
    for(int n=0;n<N;n++){
        cin>>L[n];
    }
    long long min=0;
    while(L[min]!=0){
        min++;
    }
    long long max=N-1;
    while(L[max]!=0){
        max--;
    }
    long long count=max-min+1;
    for(int n=min;n<=max;n++){
        count+=L[n];
    }
    if(R<min-1){
        count+=(min-1-R)*2;
    }
    if(max<R){
        count+=(R-max)*2;
    }
    cout<<count;
    return 0;
}