#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, x, y;
        long long b = 0, z = 1;
        cin >> n >> m;
        while (n > 0)
        {
            x = n % 10;
            y = m % 10;
            if (y < x)
            {
                m /= 10;
                y += m % 10 * 10;
            }
            if (x > y or (y - x) > 9)
            {
                b = -1;
                break;
            }
            b += z * (y - x);
            n /= 10, m /= 10, z *= 10;
        }
        if (b != -1)
            b += z * m;
        cout << b << endl;
    }
}
