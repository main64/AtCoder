#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(n,N) for(long long n=0;n<N;n++)
#define vv(kata) vector<vector<kata>>
int search(int temp,vector<pair<int,int>> HL,int i,int j);


int main(){
    int N;
    cin>>N;
    vector<pair<int,int>> HL(N);
    rep(n,N){
        cin>>HL[n].first>>HL[n].second;
    }
    int max_tall=0;
    for(int n=N-1;n>=0;n--){
        max_tall=max(max_tall,HL[n].first);
        HL[n].first=max_tall;
    }

    for(int n=N-2;n>=0;n--){
        if(HL[n+1].second>=HL[n].second){
            HL.erase(HL.begin()+n);
        }
    }

    int Q;
    cin>>Q;
    int temp=0;
    rep(q,Q){
        cin>>temp;
        cout<<search(temp,HL,0,HL.size()-1)<<endl;
    }
    return 0;
}





#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define rep(n,N) for(long long n=0;n<N;n++)

int main() {
    // 必須テクニック: 入出力の高速化
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<pair<int,int>> HL(N);
    rep(n, N) {
        cin >> HL[n].first >> HL[n].second;
    }

    // 素晴らしい実装です！ 後ろからの累積最大値（Suffix Maximum）
    int max_tall = 0;
    for (int n = N - 1; n >= 0; n--) {
        max_tall = max(max_tall, HL[n].first);
        HL[n].first = max_tall; 
    }

    int Q;
    cin >> Q;
    int temp = 0;
    rep(q, Q) {
        cin >> temp;
        
        // std::upper_bound を使って「temp より大きい最初の L」を探索
        // pair の .second だけを比較の対象にするためにラムダ式（[]...）を使用しています
        auto it = upper_bound(HL.begin(), HL.end(), temp, [](int val, const pair<int, int>& p) {
            return val < p.second;
        });

        // イテレータからインデックス（配列の何番目か）を計算
        int idx = distance(HL.begin(), it);

        // その時点での最大の身長（事前に上書き計算済み）を出力
        cout << HL[idx].first << "\n";
    }
    
    return 0;
}