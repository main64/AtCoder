#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    vector<long long> A(N);
    vector<long long> sum(N);
    int diff_n=0;
    cin>>A[0];
    sum[0]=A[0];
    for(int n=1;n<N;n++){
        cin>>A[n];
        sum[n]=sum[n-1]+A[n];
    }
    int query_type;
    int c,l,r;
    long long end_sum=sum[N-1];
    for(int q=0;q<Q;q++)
    {
        cin>>query_type;
        if(query_type==1){
            cin>>c;
            diff_n+=c;
            diff_n%=N;
        }else{
            cin>>l>>r;
            long long ans=sum[(r-1+diff_n)%N]-sum[(l-2+diff_n)%N];
            if(ans<=0){
                ans+=end_sum;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}