#include <iostream>
#include <set>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<vector<int>> AB(N+1); 
    vector<bool> skills(N+1,false);
    skills[0]=true;
    for(int n=1;n<N;n++) {
        int A,B;
        cin>>A>>B;
        AB[A].push_back(n);
        AB[B].push_back(n);
    }
    for(int n=0;n<N;n++){
        for(int i=0;i<AB[n].size();i++){
            
        }
    }
}