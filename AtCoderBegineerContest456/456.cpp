#include <iostream>

using namespace std;

int main(){
    int A[3][6];
    int P[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cin>>A[i][j];
            for(int a=0;a<3;a++){
                if(A[i][j]==a+4){
                P[i][a]++;
            }
            }
        }
    }

    double p=0;
    p=p+P[0][0]*P[1][1]*P[2][2]+P[0][0]*P[1][2]*P[2][1]+P[0][1]*P[1][0]*P[2][2]+P[0][1]*P[1][2]*P[2][0]+P[0][2]*P[1][0]*P[2][1]+P[0][2]*P[1][1]*P[2][0];
    cout<<p/216;
    return 0;


}