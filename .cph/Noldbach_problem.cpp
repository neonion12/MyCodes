#include <bits/stdc++.h>
#define Ne_is_ON int main()
#define OkkByee return 0
using ll = long long;
using namespace std;
Ne_is_ON
{
   int n, k, l = 0;
   cin >> n >> k;
   int a[n / 2];
   for (int i = 2; i <= n; i++)
   {
      int c = 1;
      for (int j = 2; j * j <= i; j++)
      {
         if (i % j == 0)
         {
            c++;
         }
      }
      if (c == 2 && l < k)
      {
         a[l] = i;
         cout << a[l] << " ";
         l++;
      }
   }

   OkkByee;
}