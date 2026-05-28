#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long L,N;
    cin>>N>>L;
    vector<long long> arc(L);
    arc[0]=1;
    long long pre_point=0;
    long long d;
    for(int n=1;n<N;n++){
        cin>>d;
        pre_point+=d;
        pre_point%=L;
        arc[pre_point]++;
    }
    long long ans=0;
    if(L%3!=0){
        cout<<0;
        return 0;
    }
    for(int n=0;n<L/3;n++){
        ans+=arc[n]*arc[n+L/3]*arc[n+2*L/3];

    }
   
    
    cout<<ans;
    return 0;
}