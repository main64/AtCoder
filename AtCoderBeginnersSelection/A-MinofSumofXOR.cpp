#include <iostream>

#define T_MAX 1000
#define N_MAX_BIT 19
using namespace std;

void make_bit(int a,int N[N_MAX_BIT]);
void bit_add(int N1[N_MAX_BIT],int N2[N_MAX_BIT]);
int return_from_bit(int N[N_MAX_BIT]);
void print_bit(int N[N_MAX_BIT]);
int mino();


int main(){
    int T,N[T_MAX][N_MAX_BIT];
    cin >>T ;
    for(int i=0;i<T;i++){
        int a=0;
        cin >> a;
        make_bit(a,N[i]);
    }
}

int mino(int T,int N[T_MAX][N_MAX_BIT]){
    int SUM=0,sum_bit[N_MAX_BIT];
    int sum_bit[N_MAX_BIT];
    make_bit(0,sum_bit);
    for(int i=0;i<T;i++){
        bit_add(sum_bit,N[i]);
        SUM+=return_from_bit(sum_bit);
    }
   cout<<SUM;
}

void make_bit(int a,int N[N_MAX_BIT]){
    for (int i=0;i<N_MAX_BIT;i++){
        N[i]=a%2;
        a/=2;
    }
    return;
}

void bit_add(int N1[N_MAX_BIT],int N2[N_MAX_BIT]){
    for(int i=0;i<N_MAX_BIT;i++){
        N1[i]=(N1[i]+N2[i])%2;
    }
}

int return_from_bit(int N[N_MAX_BIT]){
    int sum=0;
    int bit=1;
    for(int i=0;i<N_MAX_BIT;i++){
        sum+=bit*N[i];
        bit*=2;
    }
    return sum;
}

void print_bit(int N[N_MAX_BIT]){
    for (int i=0;i<N_MAX_BIT;i++){
        cout<<N[i];
    }
    cout<<endl;
    return;
}