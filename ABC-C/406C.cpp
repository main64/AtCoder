#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N;
    cin>>N;
    vector<long long> P(N);

    for(int n=0;n<N;n++){
        cin>>P[n];

    }

    long long s=0,e=1;
    while(s<N && e<N){
        while(P[s]>P[s+1] && s<N){
            s++;
            
        }

    }
    return 0;
}