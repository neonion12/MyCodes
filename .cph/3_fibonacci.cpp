#include <bits/stdc++.h>
#define Copy_maris_nah int main()
#define OkkByee return 0
const long long N = 500;
long long int a[N];
using namespace std;

int fib(long long x)
{
    a[0] = 0;
    a[1] = 1;
    int i = 2;
    while (a[i - 1] + a[i - 2] <= x)
    {
        a[i] = a[i - 1] + a[i - 2];
        i++;
    }
    return i;
}

void solve(long long x, long long y)
{

    if (x == 3)
    {
        cout << 1 << " " << 1 << " " << 1 << endl;
        return;
    }
    else if (x == 2)
    {
        cout << 1 << " " << 1 << " " << 0 << endl;
        return;
    }
    else if (x == 1)
    {
        cout << 1 << " " << 0 << " " << 0 << endl;
        return;
    }
    else
    {
        cout << a[y - 5] << " " << a[y - 4] << " " << a[y - 2] << endl;
        return;
    }
}

Copy_maris_nah
{
    long long int x;
    cin >> x;
    int y = fib(x);
    solve(x, y);

    OkkByee;
}