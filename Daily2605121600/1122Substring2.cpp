#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string S;
    cin>>S;
    int N=S.length();
    vector<int> A(N);
    for(int i=0;i<N;i++){
        A[i]=int(S[i]);
    }
    vector<vector<int>> L(2);
    L[0][0]=A[0];
    int s=0;
    for(int i=0;i<N;i++){

    }

    return 0;
}