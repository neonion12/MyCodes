#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }
    
    int amazingPerformances = 0;
    int least = a[0];
    int greatest = a[0];
    
    for (int i = 1; i < t; i++) {
        if (a[i] > greatest) {
            greatest = a[i];
            amazingPerformances++;
        } else if (a[i] < least) {
            least = a[i];
            amazingPerformances++;
        }
    }
    
    cout << amazingPerformances << endl;
    return 0;
}
