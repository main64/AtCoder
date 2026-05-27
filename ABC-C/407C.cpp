#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int a, b;
    a = str[0] - 48;
    int count = 1;
    for (int i = 1; i < str.length(); i++)
    {
        b = a;
        a = str[i] - 48;
        count++;
        count += b - a;
        if (b - a < 0)
            count += 10;
    }
    count+=a;

    cout << count;
    return 0;
}