#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long n, k;
    cin >> n >> k; // read input values

    long long num_odds = (n + 1) / 2; // number of odd integers from 1 to n
    long long num_evens = n / 2; // number of even integers from 1 to n

    if (k <= num_odds) { // if k-th number is among odd integers
        cout << 2 * k - 1 << endl; // calculate the k-th odd integer and print it
    } else { // if k-th number is among even integers
        k -= num_odds; // subtract the number of odd integers from k
        cout << 2 * k << endl; // calculate the k-th even integer and print it
    }

    return 0;
}