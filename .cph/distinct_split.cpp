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
      string a;
      cin >> a;
      vector<int> suffix(n, 0), prefix(n, 0);
      set<char> s;
      for (int i = 0; i < n; i++)
      {
         s.insert(a[i]);
         prefix[i] = s.size();
      }
      s.clear();
      for (int i = n - 1; i > -1; i--)
      {
         s.insert(a[i]);
         suffix[i] = s.size();
      }

      int ans = 0;
      for (int i = 0; i < n - 1; i++)
      {
         ans = max(ans, prefix[i] + suffix[i + 1]);
      }
      cout << ans << endl;
   }

   return 0;
}