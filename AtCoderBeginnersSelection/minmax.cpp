#include "minmax.h"

using namespace std;
int MinMax::max(int n1,int n2){
    if(n1>n2){
        return n1;
    }
    return n2;
}

int MinMax::min(int n1,int n2){
    return -max(-n1,-n2);
}

int MinMax::max3(int n1,int n2,int n3){
    return max(max(n1,n2),n3);
}

int MinMax::min3(int n1,int n2,int n3){
    return min(min(n1,n2),n3);
}