#include <iostream>

#define MAX_NUM 100

using namespace std;

int main()
{
    int N;
    int a[MAX_NUM];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int dif = 0;
    for (int i = 0; i < N; i++)
    {
        int temp_max_index = 0;
        for (int i = 1; i < N; i++)
        {
            if (a[i] > a[temp_max_index])
            {
                temp_max_index = i;
            }
        }
        if(i%2==0){
            dif+=a[temp_max_index];
        }else{
            dif-=a[temp_max_index];
        }
        a[temp_max_index]=-1;
    }
    cout<<dif;
    return 0;
}