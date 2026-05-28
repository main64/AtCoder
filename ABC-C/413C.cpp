#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long Q;
    cin>>Q;
    int query_index;
    long long c,x,k;
    vector<vector<long long>> A(2);
    long long sum=0;
    for(int q=0;q<Q;q++){
        cin>>query_index;
        switch (query_index)
        {
        case 1:
            cin>>c>>x;
            A[0].push_back(c);
            A[1].push_back(x);
            break;

        case 2:
            cin>>k;
            sum=0;
            while(A[0][0]<k){
                sum+=A[0][0]*A[1][0];
                k-=A[0][0];
                A[0].erase(A[0].begin());
                A[1].erase(A[1].begin());
            }
            sum+=A[1][0]*k;
            A[0][0]-=k;
            cout<<sum<<endl;
            break;
        
        default:
            break;
        }
    }
    return 0;
}