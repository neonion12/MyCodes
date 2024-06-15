#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> candies(n);
        vector<int> oranges(n);
        
        for (int i = 0; i < n; i++) {
            cin >> candies[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> oranges[i];
        }
        
        long long moves = 0;
        
        int min_candies = *min_element(candies.begin(), candies.end());
        int min_oranges = *min_element(oranges.begin(), oranges.end());

        for (int i = 0; i < n; i++) {
            int candy_diff = candies[i] - min_candies;
            int orange_diff = oranges[i] - min_oranges;
            
            moves += max(candy_diff, orange_diff);
        }
        
        cout << moves << endl;
    }
    
    return 0;
}
