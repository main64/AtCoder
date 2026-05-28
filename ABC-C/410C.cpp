#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N,Q;
    cin>>N>>Q;
    int query_index;
    long long p,x,k;
    vector<long long> A(N);
    for(int n=0;n<N;n++){
        A[n]=n+1;
    }
    for(int q=0;q<Q;q++){
        cin>>query_index;
        switch (query_index)
        {
        case 1:
            cin>>p>>x;
            A[p-1]=x;
            break;

        case 2:
            cin>>p;
            cout<<A[p-1]<<endl;
            break;

        case 3:
            cin>>k;
            k%=N;
            vector<long long> temp(k);
            copy(A.begin(),A.begin()+k-1,temp);
            A.erase(A.begin(),A.begin()+k-1);
            
            break;
        }
        
    }
    return 0;
}