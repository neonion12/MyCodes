#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        string a,b; cin>>a>>b;	
        if (a == b)
        {
            cout<<"YES\n";
            continue;
        }
        int n = a.length();
        a = " " + a;
        b = " " + b;
        bool ans = false;
        for(int i=2;i<=n;++i)
            if (a[i] == '1' && a[i-1] == '0' && b[i] == '1' && b[i-1] == '0')
            {
                ans = true;
                break;
            }
        cout<<(ans ? "YES\n" : "NO\n");
    }          
    return 0;
}
































// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n01 = 0, n02 = 0, n11 = 0, n12 = 0;
//         string s1, s2;
//         cin >> s1 >> s2;
//         if (s1 == s2)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             for (int i = 1; i < s1.size() - 1; ++i)
//             {
//                 if (s1[i] == '0')
//                 {
//                     n01++;
//                 }
//                 else
//                 {
//                     n11++;
//                 }
//                 if (s2[i] == '0')
//                 {
//                     n02++;
//                 }
//                 else
//                 {
//                     n12++;
//                 }
//             }
//             if (((n01 % 2) == (n02 % 2)) && ((n01 % 2) == (n02 % 2)))
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     return 0;
// }