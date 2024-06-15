#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int hostColors[n], guestColors[n];
    for (int i = 0; i < n; i++) {
        cin >> hostColors[i] >> guestColors[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && hostColors[i] == guestColors[j]) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
