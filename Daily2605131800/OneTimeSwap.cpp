#include <iostream>
#include <string>
#include <vector>

using namespace std;
int step_times(int N);

int main(){
    string S;
    cin>>S;
    vector<int> alphabet(26);
    for(int i=0;i<S.length();i++){
        alphabet[int(S[i])-97]++;
    }
    int ans=S.length()*(S.length()-1)/2;
    for(int i=0;i<26;i++){
        ans-=alphabet[i]*(alphabet[i]-1)/2;
    }
    if(ans==0){
        cout<<1;
    }else{
            cout<<ans;

    }
    return 0;
}

