#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        long long int n, k;
        cin >> n >> k;
        vector<pair<long long int, long long int>> monsters;
        for (int i = 0; i < n; ++i) {
            long long int health;
            cin >> health;
            monsters.push_back({health, i + 1}); // Store health and index
        }
        priority_queue<pair<long long int, long long int>> pq;
        for (auto monster : monsters) {
            pq.push(monster); // Initialize priority queue with all monsters
        }
        vector<long long int> order;
        while (!pq.empty()) {
            auto monster = pq.top();
            pq.pop();
            if (monster.first <= 0) { // Monster dies
                order.push_back(monster.second);
                continue;
            }
            monster.first -= k; // Deal damage
            pq.push(monster); // Update monster's health in the priority queue
        }
        for (auto index : order) {
            cout << index << " ";
        }
        cout << endl;
    }
    return 0;
}

















// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         long long int n, k;
//         cin >> n >> k;
//         long long int a[n], b[n];
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }
//         long long int maxindex = -10, j = 0;
//         while (j != n)
//         {
//             maxindex=-10;
//             for (long long int i = 0; i < n; ++i)
//             {
//                 if (a[i] > 0 && (maxindex == -10 || a[i] > a[maxindex]))
//                 {
//                     maxindex = i;
//                 }
//             }
//             if (a[maxindex] > 0)
//             {
//                 a[maxindex] = a[maxindex] - k;
//                 if (a[maxindex] <= 0)
//                 {

//                     b[j] = maxindex+1;
//                     j++;
//                 }
//             }
            
//         }
//         for(int k=0;k<n;++k){
//             cout<<b[k]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
