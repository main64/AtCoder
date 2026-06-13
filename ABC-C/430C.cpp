#include <iostream>
#include <vector>


using namespace std;

int main(){
    long long N,A,B;
    cin>>N>>A>>B;
    string S;
    cin>>S;
    vector<pair<char,long long>> run_length(1);
    run_length[0].first=S[0];
    run_length[0].second=1;
    for(int i=1;i<N;i++){
        if(S[i]==run_length.back().first){
            run_length.back().second++;
        }else{
            run_length.push_back(pair<char,long long>(S[i],1));
        }
    }
    long long A_sum=0,B_sum=0;
    long long ans=0;
    for(int i=0;i<run_length.size();i++){
        A_sum+=run_length[i].second;
        B_sum+=run_length[i+1].second;
        if(A_sum>=A && B_sum<B){
            ans+=A_sum-A+1;
        }else if(B_sum>=B){
            i+=2;
        }
    }

}