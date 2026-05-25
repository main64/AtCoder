#include <iostream>

using namespace std;

int main(){
    int A[3]={0};
    for(int i=0;i<3;i++){
        cin>>A[i];
    }
    if(A[0]*A[1]==A[2]){
        cout<<"Yes";
    }else if(A[0]*A[2]==A[1]){
                cout<<"Yes";
    }else if(A[1]*A[2]==A[0]){
                cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;

}