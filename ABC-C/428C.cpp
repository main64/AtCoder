#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string S="";
    int query_index;
    vector<int> direct;
    vector<int> mini;
    char temp;
    long long Q;
    cin>>Q;
    direct.push_back(0);
    mini.push_back(0);
    for(long long q=0;q<Q;q++){
        cin>>query_index;
        if(query_index==1){
            cin>>temp;
            S.push_back(temp);
            if(temp=='('){
            direct.push_back(direct.back()+1);
            }else{
            direct.push_back(direct.back()-1);
            }
            mini.push_back(min(mini.back(),direct.back()));
        }else{
            direct.pop_back();
            mini.pop_back();
        }
        if(direct.back()!=0 || mini.back()!=0){
            cout<<"No";
        }else{
            cout<<"Yes";
        }
        cout<<endl;
    }
    return 0;

}