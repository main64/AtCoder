#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long min3(long long na,long long nb,long long nc);

int main(){
    long long T;
    long long na,nb,nc;
    long long num;
    cin>>T;
    for(long long t=0;t<T;t++){
        num=0;
        cin>>na>>nb>>nc;
        num=min3(na,nb,nc);
        na-=num;
        nc-=num;
        nb-=num;
        if(na>=3 && nc>=3){
            long long temp=min(na/3,nc/3);
            num+=temp*2;
            na-=temp*3;
            nc-=temp*3;
        }
        while(na>=1 && nc>=1 && na+nc>=3){
            num++;
            na--;
            nc--;
            if(na>=nc){
                na--;
            }else{
                nc--;
            }
        }
        cout<<num<<endl;

    }
    return 0;
}

long long min3(long long na,long long nb,long long nc){
    long long max=na;
    if(max>nb) max=nb;
    if(max>nc) max=nc;
    return max;

}