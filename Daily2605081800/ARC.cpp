#include <iostream>

using namespace std;

int main(){
    int R,C;
    int A[2][2];
    cin>>R>>C>>A[0][0]>>A[0][1]>>A[1][0]>>A[1][1];
    cout<<A[R-1][C-1];
    return 0;
}