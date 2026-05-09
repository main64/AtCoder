#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int a;
    int min_div=30;
    int count=0;
    for(int i=0;i<N;i++){
        cin>>a;
        count=0;
        while(a%2==0 & count<min_div){
            a/=2;
            count++;
        }
        if(count<min_div){
            min_div=count;
        }
    }
    cout << min_div;
    return 0;
}