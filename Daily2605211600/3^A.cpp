#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

int main(){
    long long M;
    cin>>M;
    vector<int> A(20);
    int N=0;
    int a=10;
    while(M>0){
        if(M>=pow(3,a)){
            A[N]=a;
            N++;
            M-=pow(3,a);
        }else{
            a--;
        }
    }
    cout<<N<<endl;
    for(int i=N-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
    return 0;
    
}