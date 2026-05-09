#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int A[N];
    for(int n=0;n<N;n++){
        cin>>A[n];
    }
    for(int n=0;n<N;n++){
        int i=n-1;
        while(i>=0 && A[n]>=A[i]){
            i--;
    }
    if(i==-1){
            cout<<-1<<endl;

    }else{
            cout<<i+1<<endl;

    }
    }
    return 0;
}