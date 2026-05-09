#include <iostream>

using namespace std;

int count_pattern(int a,int b,int c,int A,int B,int C,int depth);
void stub_printA(int a,int b,int c,int A,int B,int C);
int coin(int X);


int main(){
    for(int i=0;i<100;i++){
        coin(i*50);
    }
    return 0;
}

int coin(int X){
    int A,B,C;
    int pattern=0;
    int a,b,c,x;
    a=0;
    b=0;
    c=0;
    x=X;

    A=30;
    B=30;
    C=30;
    
    a=min(X/500,A);
    X-=a*500;
    b=min(X/100,B);
    X-=b*100;
    c=min(X/50,C);
    X-=c*50;
    if(X!=0){
        cout<<x<<":"<<0<<endl;
        return 0;
    }
    pattern++;
    //cout << a <<","<< b << "," << c<<endl;
    pattern+=count_pattern(a,b,c,A,B,C,0);
    cout<<x<<":"<<pattern<<endl;
    return 0;
}

int count_pattern(int a,int b,int c,int A,int B,int C,int depth){
    int pattern=0;
    pattern+=min(b,(C-c)/2);
    /*stub_printA(a,b,c,A,B,C);
    cout<<pattern<<endl;*/
    if(a>0 && (B-b)*2+(C-c)>=10){
        a--;
        c+=10-min(5,B-b)*2;
        b+=min(5,B-b);
        pattern++;
        /*cout << a <<","<< b << "," << c<<endl;
        cout<<"start depth:"<<depth+1<<endl;*/
        pattern+=count_pattern(a,b,c,A,B,C,depth+1);
    }
    //cout<<"depth:"<<depth<<",patter:"<<pattern<<endl;
    return pattern;
}


void stub_printA(int a,int b,int c,int A,int B,int C){
    while(b>0 && C-c>=2){
        b--;
        c+=2;
        //cout<<"     "<<a<<","<<b<<","<<c<<endl;
    }
    return;
}
