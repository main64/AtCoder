#include <iostream>

#define MAX_NUM 100
using namespace std;
int cardGameforTwo(int N, int *a);
void quickSort(int start_x, int end_x, int *a);

int main()
{
    int N;
    int a[MAX_NUM];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cout<<cardGameforTwo(N,a);
    return 0;
}

int cardGameforTwo(int N, int *a)
{
    quickSort(0,N-1,a);
    for (int i = 0; i <= N; i++)
    {
        cout << a[i]<<" ";
    }
    cout << endl;
    int alice_score=0,bob_score=0;
    for(int i=0;i<N;i+=2){
        alice_score+=a[i];
    }
    for(int i=1;i<N;i+=2){
        bob_score+=a[i];    
    }
    return alice_score-bob_score;
}

void quickSort(int start_x, int end_x, int *a)
{
    if(start_x==end_x){
        return;
    }
    cout<<"start:"<<start_x<<"end_x:"<<end_x<<"->";
    for (int i = start_x; i <= end_x; i++)
    {
        cout << a[i]<<" ";
    }
    cout << endl;
    int n_base = a[end_x];
    int i = start_x;
    int j = end_x - 1;
    while(i<j)
    {
        while (a[i] <= n_base && i < end_x)
        {
            i++;
        }
        while (a[j] >= n_base && j >= start_x)
        {
            j--;
        }
        cout<<i<<","<<j<<endl;
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } 
    int border=start_x;
    while(a[border]<n_base && border<end_x){
        border++;
    }
    quickSort(start_x, border, a);
    quickSort(border+1, end_x, a);

    cout<<"start:"<<start_x<<"end_x:"<<end_x<<"->";
    for (int i = start_x; i <= end_x; i++)
    {
        cout << a[i]<<" ";
    }
    cout<<endl;
    
}