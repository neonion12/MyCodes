#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int x, y = 0;
    cin >> x;
    while (x != 0)
    {
        if (x >= 5)
        {
            x = x - 5;
            y++;
        }
       else if (x >= 4)
        {
            x = x - 4;
            y++;
        }
       else if (x >= 3)
        {
            x = x - 3;
            y++;
        }
       else if (x >= 2)
        {
            x = x - 2;
            y++;
        }
       else if (x >= 1)
        {
            x = x - 1;
            y++;
        }
    }
    cout<<y;
}

/*#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    cin >> x;
    cout << (x + 4) / 5 << '\n';
}*/