#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string str;
    string stock;
    int i=0;
    while(str!="end"){
        cin>>str;
        if(i%8==0)
        stock+=str+" ";
        if(i%8==1)
        stock+=str+"\n";
        i++;
    }
    cout<<stock;

    ofstream outFile("name.csv");
    if(outFile.is_open()){
        outFile<<stock;
        outFile.close();
    }

    return 0;
}

