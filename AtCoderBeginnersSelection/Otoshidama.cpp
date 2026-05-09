#include <iostream>

using namespace std;
void print(int yukichi,int higuchi,int noguchi);

int main(){
  int N,Y;
  cin>>N>>Y;
  int yukichi=0;
  int higuchi=0;
  int noguchi;
  
  noguchi=Y/1000;
  int diff=noguchi-N;
  while(diff%4!=0){
    yukichi++;
    diff-=9;
    noguchi-=10;
    if(diff<0){
      print(-1,-1,-1);
      return 0;
    }
  }
  higuchi=diff/4;
  noguchi-=higuchi*5;


  print(yukichi,higuchi,noguchi);
  return 0;
  
  
}

void print(int yukichi,int higuchi,int noguchi){
  cout<<yukichi<<" "<<higuchi<<" "<<noguchi;
  return;
}