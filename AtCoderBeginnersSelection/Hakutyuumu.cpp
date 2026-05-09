#include <iostream>
#include <string>

using namespace std;
string W[4]={"dream","dreamer","erase","eraser"};

int main(){
    string S;
    cin>>S;
    while(S.length()!=0){
        if (S.length()>=5 && S.substr(S.length()-5)==W[0])
        {
            S.erase(S.length()-5);
        }else if (S.length()>=7 && S.substr(S.length()-7)==W[1])
        {
            S.erase(S.length()-7);
        }else if (S.length()>=5 && S.substr(S.length()-5)==W[2])
        {
            S.erase(S.length()-5);
        }else if (S.length()>=6 &&S.substr(S.length()-6)==W[3])
        {
            S.erase(S.length()-6);
        }else{
            cout<<"NO";
            return 0;
        }
        
    }
    cout<<"YES";
    return 0;
}



