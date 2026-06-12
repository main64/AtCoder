#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> S;
vector<string> strs;
void make_s(int depth, string made_str,int N);

int main()
{
    int N, K;
    long long X;
    cin >> N >> K >> X;
    S.resize(N);
    for (int n = 0; n < N; n++)
    {
        cin >> S[n];
    }
    make_s(K,"",N);
    sort(strs.begin(),strs.end());

cout<<strs[X-1];
    return 0;

}

void make_s(int depth, string made_str,int N)
{
    if(depth==0){
        strs.push_back(made_str);
        return;
    }
    for (int i = 0; i < N; i++)
    {
            make_s(depth - 1, made_str + S[i], N);
            
    }
}