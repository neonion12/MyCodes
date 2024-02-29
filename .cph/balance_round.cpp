#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minProblemsToRemove = 0;
        for (int i = 1; i < n; i++)
        {
            int diff = a[i] - a[i - 1];
            int problemsToRemove = max(0, (diff - 1) / k);
            minProblemsToRemove = problemsToRemove;
        }

        cout << minProblemsToRemove << endl;
    }

    return 0;
}
