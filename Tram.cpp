#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, x = 0;
    cin >> n;
    int arr[n] = {};
   for(int i=0;i<n;i++)
    {
        cin >> a;
        cin >> b;
        x = x - a + b;
        arr[i] = x;
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}