#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n >> i;
    while (i--)
    {
        n % 10 ? n = n - 1 : n = n / 10;
    }
    cout << n;

    return 0;
}