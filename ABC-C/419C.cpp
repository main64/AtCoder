#include <iostream>
#include <vector>

using namespace std;
#define MAX 1000000000

int main(){
    long long N;
    cin>>N;
    long long R,C;
    long long R_min=MAX,R_max=0,C_min=MAX,C_max=0;
    for(int n=0;n<N;n++){
        cin>>R>>C;
        if(R_min>R) R_min=R;
        if(R_max<R) R_max=R;
        if(C_min>C) C_min=C;
        if(C_max<C) C_max=C;
    }
    int t=(max(R_max-R_min,C_max-C_min)+1)/2;
    cout<<t;
    return 0;
}