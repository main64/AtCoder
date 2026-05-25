#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long N,M,Q;
	cin>>N>>M>>Q;
	vector<vector<bool>> permission(N);
	
	for(int n=0;n<N;n++){
		permission[n].resize(M+1);
	}

	int X,Y;
	int queryI;
	for(int q=0;q<Q;q++){
		cin>>queryI;
		switch (queryI)
		{
		case 1:
			cin>>X>>Y;
			X--,Y--;
			permission[X][Y]=1;
			break;
		
		case 2:
			cin>>X,X--;
			permission[X][M]=1;
			break;

		case 3:
			cin>>X>>Y;
			X--,Y--;
			if(permission[X][M]==1 || permission[X][Y]==1){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
			break;
		
		default:
			break;
		}
		
	}

	return 0;
}

