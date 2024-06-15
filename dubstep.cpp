#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string word;
    bool in_word = false;
    for (int i = 0; i < s.length(); i++) {
        if (s.substr(i, 3) == "WUB") {
            if (in_word) {
                cout << word << " ";
                word = "";
                in_word = false;
            }
            i += 2; // skip "WUB"
        } else {
            word += s[i];
            in_word = true;
        }
    }
    if (in_word) {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}
