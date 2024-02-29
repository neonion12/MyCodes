// i) Sieve of Eratosthenes
// Code:
#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
    int i, j;
    int arr[n] = {0};
    for (i = 2; i <= sqrt(n + 1); i++)
    {
        if (arr[i] == 0)
        {
            for (j = i * i; j <= n; j = j + i)
            {
                arr[j] = 1;
            }
        }
    }
    for (i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    prime(n);
}