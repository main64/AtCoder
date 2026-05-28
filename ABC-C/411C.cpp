#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N,Q;
    cin>>N>>Q;
    long long sec_num=0;
    vector<int> arr(N,1);
    long long A;
    for(long long q=0;q<Q;q++){
        cin>>A,A--;
        arr[A]*=-1;
        if(A==0){
            if(N==1){
                sec_num-=arr[A];
            }else if(arr[1]==1){
                sec_num+=-arr[A];
            }
        }else if(A==N-1){
            if(arr[N-2]==1){
                sec_num+=-arr[A];
            }
        }else{
            if(arr[A-1]==1 && arr[A+1]==1){
                sec_num-=arr[A];
            }else if(arr[A-1]==-1 && arr[A+1]==-1){
                sec_num+=arr[A];
            }
        }
        cout<<sec_num<<endl;
    }
    return 0;
}