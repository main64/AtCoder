#include <iostream>

using namespace std;

int main(){
    int s;
    int s1,s2,s3;
    cin>>s;
    s1=s%10;
    s=s/10;
    s2=s%10;
    s=s/10;
    s3=s%10;
    cout<<s1+s2+s3;
    return 0;
}