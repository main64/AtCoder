#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int max_index=1,second_index=1;
    int max_val=0,second_val=0;
    int temp;
    for(int i=1;i<=N;i++){
        cin>>temp;
        if(temp>max_val){
            second_index=max_index;
            second_val=max_val;
            max_index=i;
            max_val=temp;
        }else if(temp>second_val){
            second_val=temp;
            second_index=i;
        }
    }
    cout<<second_index;
    return 0;
}