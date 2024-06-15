#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s1 = (i % 2) ? "I hate " : "I love ";
        s2 = (i < n) ? "that " : "it";
        cout << s1 << s2;
    }

    return 0;
}