#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> numbers(N);

    // Read the list of N numbers
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    int Q;
    cin >> Q;

    // Compute prefix sum
    vector<long long> prefixSum(N);
    prefixSum[0] = numbers[0];
    for (int i = 1; i < N; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + numbers[i];
    }

    // Process queries
    for (int q = 0; q < Q; ++q)
    {
        int i, j;
        cin >> i >> j;
        long long result;
        if (i == 0)
        {
            result = prefixSum[j];
        }
        else
        {
            result = prefixSum[j] - prefixSum[i - 1];
        }
        cout << result << endl;
    }

    return 0;
}
