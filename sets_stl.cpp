#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y;
    cin >> t;
    set<int> s;
    while (t--)
    {
        cin >> x >> y;
        if (x == 1)
        {
            s.insert(y);
        }
        else if (x == 2)
        {
            set<int>::iterator itr = s.find(y);
            if (itr != s.end())
            {
                s.erase(y);
            }
        }
        else
        {
            set<int>::iterator itr = s.find(y);
            if (itr != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}