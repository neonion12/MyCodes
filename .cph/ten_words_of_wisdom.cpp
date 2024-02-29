#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> responses; // Pair of (length, quality)
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            responses.push_back({x, y});
        }

        int maxQuality = -1;
        int winner = -1;
        for (int i = 0; i < n; i++)
        {
            if (responses[i].first <= 10 && responses[i].second > maxQuality)
            {
                maxQuality = responses[i].second;
                winner = i;
            }
        }

        cout << winner + 1 << endl;
    }

    return 0;
}
