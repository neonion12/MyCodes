#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n01 = 0, n02 = 0, n11 = 0, n12 = 0;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 1; i < s1.size() - 1; ++i)
            {
                if (s1[i] == '0')
                {
                    n01++;
                }
                else
                {
                    n11++;
                }
                if (s2[i] == '0')
                {
                    n02++;
                }
                else
                {
                    n12++;
                }
            }
            if (((n01 % 2) == (n02 % 2)) && ((n01 % 2) == (n02 % 2)))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}