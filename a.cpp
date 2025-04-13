#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, sum = 0, rem = 0, i = 0;
    cin >> a;
    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        i++;
    }
    cout << i << endl;
}