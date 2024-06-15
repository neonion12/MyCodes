#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s, a, b, c;
    cin >> t;
    while (t--)
    {
        int r = 0, w = 0, o = 0, R = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                r = r + 0;
            }
            else if (s[i] == '1')
            {
                r = r + 1;
            }
            else if (s[i] == '2')
            {
                r = r + 2;
            }
            else if (s[i] == '3')
            {
                r = r + 3;
            }
            else if (s[i] == '4')
            {
                r = r + 4;
            }
            else if (s[i] == '5')
            {
                r = r + 5;
            }
            else if (s[i] == '6')
            {
                r = r + 6;
            }
            else if (s[i] == 'W')
            {
                w = w + 1;
            }
            o++;
        }
        R = o % 6;
        if (o > 6)
        {

            a = " Overs";
        }
        else
        { 
            if ((o == 6) && (R!=0)) 
            {
                a = " Overs";
            }
            else{
                a=" Over";
            }
        }
        o = o / 6;
        

        if (r > 1)
        {
            b = " Runs";
        }
        else
        {
            b = " Run";
        }
        if (w > 1)
        {
            c = " Wickets";
        }
        else
        {
            c = " Wicket";
        }
        cout << o << "." << R << a << " " << r << b << " " << w << c << "." << endl;
    }

    return 0;
}