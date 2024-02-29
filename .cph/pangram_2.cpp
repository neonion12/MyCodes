#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    int a[26] = {};

    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            a[s[i] - 'A']++;
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            a[s[i] - 'a']++;
        }
    }

    bool is_pangram = true;
    for(int i = 0; i < 26; i++) {
        if(a[i] == 0) {
            is_pangram = false;
            break;
        }
    }

    if(is_pangram) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
