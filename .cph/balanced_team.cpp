#include <bits/stdc++.h>
using namespace std;
int n, i, j, r, a[222000];
int main()
{
    for (cin >> n; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = j = 0; j < n;)
        a[j] > a[i] + 5 ? i++ : r = max(r, j++ + 1 - i);
    cout << r;
}