#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0, a = 0, d = 0;
    string s;
    cin >> n;
    cin >> s;
    while (n--)
    {
        if (s[i] == 'A')
        {
            a++;
        }

        else
        {
            d++;
        }
        i++;
    }
    if (a == d)
    {
        cout << "Friendship";
    }
    else if (a > d)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }
}