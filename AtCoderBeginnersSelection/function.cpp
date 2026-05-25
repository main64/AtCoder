#include "function.h"

using namespace std;

int Function::Max(int n1,int n2){
    if(n1>n2){
        return n1;
    }
    return n2;
}

int Function::Min(int n1,int n2){
    return -Max(-n1,-n2);
}