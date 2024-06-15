#include<bits/stdc++.h>
#define Ne_is_ON int main()
#define OkkByee return 0
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
using ll = long long;
using namespace std;
Ne_is_ON
{
  int t;
  cin >> t;
  while (t--) {
    int x, y, a, b;
    cin >> a >> b;
    int minX = a, minY = b, maxX = a, maxY = b;

    for (int i = 0; i < 3; i++) {
      cin >> x >> y;
      minX = min(minX, x);
      minY = min(minY, y);
      maxX = max(maxX, x);
      maxY = max(maxY, y);
    }

    int sideLength = max(maxX - minX, maxY - minY);
    cout << sideLength * sideLength << endl;
  }

  OkkByee;
}
