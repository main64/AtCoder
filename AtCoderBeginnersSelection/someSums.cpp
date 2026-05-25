#include <iostream>

using namespace std;
#define MAX_DIGIT 5
int nSum(int* n);
int someSums(int N,int A,int B,int* n);


int main(){
    int N,A,B;
    int n[MAX_DIGIT];
    
    cin >>N>>A>>B;
    
    cout<<someSums(N,A,B,n)<<endl;
    return 0;
}

int someSums(int N,int A,int B,int* n){
    int sum=0;
    for(int i=1;i<=N;i++){
        int a=i;
        for(int j=0;j<MAX_DIGIT;j++){
            n[j]=a%10;
            a=a/10;
        }
        int n_sum=nSum(n);
        if(n_sum>=A && n_sum<=B){
            sum+=i;
        }
    }
    return sum;
}

int nSum(int* n){
    int sum=0;
    for(int i=0;i<MAX_DIGIT;i++){
        sum+=n[i];
    }
    return sum;
}