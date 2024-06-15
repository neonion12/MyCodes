#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> findDivisors(long long n) {
    vector<long long> divisors;
    
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            
            // If the divisors are not duplicates, add the second divisor
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    
    sort(divisors.begin(), divisors.end()); // Sort the divisors
    
    return divisors;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> divisors = findDivisors(n);

        long long longestStreak = 1;
        long long currentStreak = 1;

        for (size_t i = 1; i < divisors.size(); i++) {
            if (divisors[i] == divisors[i - 1] + 1) {
                currentStreak++;
            } else {
                longestStreak = max(longestStreak, currentStreak);
                currentStreak = 1;
            }
        }

        longestStreak = max(longestStreak, currentStreak);
        
        cout << longestStreak << endl;
    }

    return 0;
}
