#include <iostream>
#include <string>

using namespace std;
string search_str(string backbone,string* str,int* A,int* B,int M);


 int main(){
    int N,M;
    cin>>N;
    int A[N],B[N];
    for(int i=0;i<N;i++){
        cin>>A[i]>>B[i];
    }
    cin>>M;
    string str[M];
    for(int i=0;i<M;i++){
        cin >> str[i];
    }
    for(int i=0;i<M;i++){
        cout << search_str(str[i],str,A,B,M)<<endl;
    }
    
    return 0;
    
}

string search_str(string backbone,string* str,int* A,int* B,int M){
    int length_backbone=backbone.length();
    for(int i_backbone=0;i_backbone<length_backbone;i_backbone++){
        int has_searched=0;
        for(int n_str=0;n_str<M;n_str++){
            has_searched=0;
            if(str[n_str].length()==A[i_backbone]){
                if(str[n_str][B[i_backbone]-1]==backbone[i_backbone]){
                    has_searched=1;
                    n_str=M;
                }
            }
        }
        if(has_searched==0){
            return "No";
        }
    }
    return "Yes";
}