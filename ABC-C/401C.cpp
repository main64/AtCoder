#include <iostream>

using namespace std;

int main(){
    long N,K;
    for(K=0;K<10;K++){
        vector<int> a(20);
        for(int i=0;i<20;i++){
            if(i<K){
                a[i]=1;
            }else{
                a[i]=0;
                for(int j=1;j<=K;j++){
                    a[i]+=a[i-j];
                }
            }

            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}