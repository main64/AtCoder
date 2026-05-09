#include <iostream>

using namespace std;

int main(){
    int H,W;
    cin>>H>>W;
    for(int i=0;i<W;i++){
        cout<<"#";
    }
    cout<<endl;
    for(int i=1;i<H-1;i++){
        cout<<"#";
        for(int j=1;j<W-1;j++){
            cout<<".";
        }
        cout<<"#"<<endl;
    }
    for(int i=0;i<W;i++){
        cout<<"#";
    }
    return 0;
}