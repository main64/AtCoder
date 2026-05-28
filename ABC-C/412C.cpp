#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long T,N;
    cin>>T;
    for(int t=0;t<T;t++){
        cin>>N;
        vector<long long> S(N);
        for(int n=0;n<N;n++){
            cin>>S[n];
        }
        if(N==2){
            
        }else{
            sort(S.begin()+1,S.end()-1);
            long long s=0,e=N-2,m;
            while(s!=e){
                m=(s+e)/2;
                long long temp=S[m];
                if(temp<=S[0]*2){
                    s=m;
                }else{
                    e=m;
                }
            }

        }
        
    }
}