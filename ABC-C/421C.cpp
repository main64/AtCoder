#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    string S;
    cin >> S;
    long long change_num1 = 0;
    long long change_num2 = 0;
    long long i = 0;
    for (long long n = 0; n < N; n++)
    {
        while (S[i] != 'A')
        {
            i++;
        }
        change_num1 += abs(2 * n - i);
        change_num2 += abs(2 * n + 1 - i);
        i++;
    }
    if (change_num1 > change_num2)
    {
        cout << change_num2;
    }
    else
    {
        cout << change_num1;
    }
    return 0;
}