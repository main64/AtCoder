#include <iostream>

using namespace std;

int main(){
  string s;
  cin>>s;
  int n=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='E'){
      n++;
    }
  }
  if(2*n>s.length()){
    cout<<"East";
    
  }else{
    cout<<"West";
  }
  return 0;
}
