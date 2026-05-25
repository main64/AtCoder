#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    int a=int(str[0])-48;
    int b=int(str[2])-48;
    cout<<a*b;
    return 0;
}