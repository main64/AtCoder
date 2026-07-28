#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int isplus=0;
    for(int i=0;i<N;i++){
        int temp=0;
        cin>>temp;
        if(temp>=0){
            isplus=1;
        }
    }
    if(isplus==1){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}