#include <iostream>

using namespace std;

int count_pattern(int a,int b,int c,int A,int B,int C,int depth);


int main(){
    int A,B,C;
    int X;
    int pattern=0;
    int a,b,c,x;
    a=0;
    b=0;
    c=0;
    x=X;

    cin >> A >> B >> C >> X;
    
    a=min(X/500,A);
    X-=a*500;
    b=min(X/100,B);
    X-=b*100;
    c=min(X/50,C);
    X-=c*50;
    if(X!=0){
        cout<<0;
        return 0;
    }
    pattern++;
    pattern+=count_pattern(a,b,c,A,B,C,0);
    cout<<pattern;
    return 0;
}

int count_pattern(int a,int b,int c,int A,int B,int C,int depth){
    int pattern=0;
    pattern+=min(b,(C-c)/2);
    if(a>0 && (B-b)*2+(C-c)>=10){
        a--;
        c+=10-min(5,B-b)*2;
        b+=min(5,B-b);
        pattern++;
        pattern+=count_pattern(a,b,c,A,B,C,depth+1);
    }
    return pattern;
}

