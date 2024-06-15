#include <bits/stdc++.h>
using namespace std;

int t, sum;
string s;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        int ada = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '0')
                ada = 1;
        }
        if (s[s.size() - 1] == '9' or s[0] != '1' or ada)
        {
            cout << "NO" << endl;
            continue;
        }
        else
            cout << "YES" << endl;
    }
}