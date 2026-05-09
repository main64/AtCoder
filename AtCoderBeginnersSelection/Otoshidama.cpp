#include <iostream>

using namespace std;
void print(int yukichi,int higuchi,int noguchi);

int main(){
  int N,Y;
  cin>>N>>Y;
  int yukichi=0;
  int higuchi=0;
  int noguchi=0;
  
  for(yukichi=0;yukichi<=N;yukichi++){
    for(higuchi=0;yukichi+higuchi<=N;higuchi++){
      noguchi=N-yukichi-higuchi;
      if(noguchi*1000+higuchi*5000+yukichi*10000==Y){
        print(yukichi,higuchi,noguchi);
        return 0;
      }
    }
  }
  print(-1,-1,-1);
  return 0;
  
  
}

void print(int yukichi,int higuchi,int noguchi){
  cout<<yukichi<<" "<<higuchi<<" "<<noguchi;
  return;
}
