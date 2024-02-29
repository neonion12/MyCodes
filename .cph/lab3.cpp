// ii) Prime Factorization
// Code:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int arr[99999999] = {0}, arr1[99999999], k = 0;
void prime(int n)
{
    ll int i, j;
    for (i = 2; i <= sqrt(n + 1); i++)
    {
        if (arr[i] == 0)
        {
            for (j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            arr1[k] = i;
            k++;
        }
    }
}
int main()
{
    ll int i, a[1000], n, c = 0, t;
    cout << "Input The Number: " << endl;
    cin >> n;
    prime(n);
    t = n;
    while (t > 1)
    {
        for (i = 0; i < k; i++)
        {
            if (t % arr1[i] == 0)
            {
                a[c] = arr1[i];
                c++;
                t = t / arr1[i];
                break;
            }
        }
    }
    cout << "Prime factors are:" << endl;
    for (i = 0; i < c; i++)
    {
        cout << a[i];
        if (i < c - 1)
        {
            cout << ", ";
        }
    }
    return 0;
}
