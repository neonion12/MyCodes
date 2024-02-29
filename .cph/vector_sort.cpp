#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, x;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (auto &p : v)
    {
        cout << p << " ";
    }

    return 0;
}