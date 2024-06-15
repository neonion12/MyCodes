#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, i = 0;
    cin >> x;
    int a[x];
    while (i <= x - 1)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            cout << "HARD";
            i = 0;
            break;
        }
        i++;
    }
    if (i != 0)
    {
        cout << "EASY";
    }

    return 0;
}