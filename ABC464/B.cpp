#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;
    vector<vector<char>> c(H,vector<char>(W));
    int w_left=W,w_right=0;
    int h_up=H,h_down=0;
    for(int h=0;h<H;h++){
        for(int w=0;w<W;w++){
            cin>>c[h][w];
            if(c[h][w]=='#'){
                w_left=min(w_left,w);
                w_right=max(w_right,w);
                h_up=min(h_up,h);
                h_down=max(h_down,h);
            }
        }
    }

    for(int h=h_up;h<=h_down;h++){
        for(int w=w_left;w<=w_right;w++){
            cout<<c[h][w];
        }
        cout<<endl;
    }
    return 0;

}