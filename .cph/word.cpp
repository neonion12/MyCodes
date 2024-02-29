#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int j = 0, k = 0;
    char sl[s.size()], su[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            j++;
        }
        else
        {

            k++;
        }
    }

    if (j >= k)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout << s;
}