#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pp, nd;
    cin >> pp >> nd;
    int d[nd * 2];
    for (int i = 0; i < nd * 2; i++)
    {
        int x, y;
        cin >> x >> y;
        d[i] = x;
        d[i + 1] = y;
        i++;
    }
    
    for (int i = 0; i < nd * 2 - 2; i += 2)
    {
        for (int j = i + 2; j < nd * 2; j += 2)
        {
            if (d[i] > d[j])
            {
                swap(d[i], d[j]);
                swap(d[i + 1], d[j + 1]);
            }
        }
    }
    
    for (int i = 0; i < nd * 2; i += 2)
    {
        if (pp > d[i])
        {
            pp += d[i + 1];
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    return 0;
}
