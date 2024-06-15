#include <bits/stdc++.h>
using namespace std;
int main()
{
   string n;
   int i = 0;
   cin >> n;
   for(int j=0;j<n.size();j++)
   {
      if (n[j] == '4' || n[j] == '7')
      {
         i++;
      }
   }
   if (i == 4 || i == 7)
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }

   return 0;
}
