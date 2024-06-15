#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, c = 1;
    cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x - 1] = i + 1;
    }
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}