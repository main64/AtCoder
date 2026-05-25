#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    int ABC[3]={0};
    for(int i=0;i<3;i++){
        if(str[i]=='A'){
            if(ABC[0]==0){
                ABC[0]=1;
            }else{
                cout<<"No";
                return 0;
            }
        }else if(str[i]=='B'){
            if(ABC[1]==0){
                ABC[1]=1;
            }else{
                cout<<"No";
                return 0;
            }
        }else if(str[i]=='C'){
            if(ABC[2]==0){
                ABC[2]=1;
            }else{
                cout<<"No";
                return 0;
            }
        }else{
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}