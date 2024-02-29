#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

// Function to partition the array and return the pivot index
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform the quicksort
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Find the pivot element such that elements smaller than the pivot
        // are on the left, and elements greater than the pivot are on the right.
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after the pivot
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int m;
    int n = 9;

    for (int i = 0; i < n; i++) {
        cout << "Enter how many numbers you want in the array to perform quick sort: ";
        cin >> m;

        ifstream inFile("search_5.txt");
        if (!inFile.is_open()) {
            cerr << "Failed to open the file for reading." << endl;
            return 1;
        }

        vector<int> arr;
        int number;
        for (int i = 0; i < m; ++i) {
            if (inFile >> number) {
                arr.push_back(number);
            } else {
                cerr << "Insufficient data in the file." << endl;
                return 1;
            }
        }
        inFile.close();

        int n = arr.size();

        cout << "Unsorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << endl;

        // Start timer before sorting
        auto start = high_resolution_clock::now();

        quicksort(arr, 0, n - 1);

        // Stop timer after sorting
        auto end = high_resolution_clock::now();

        duration<double> time_taken = duration_cast<duration<double>>(end - start);

        cout << "Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << endl << "Execution time: " << time_taken.count() * 1000 << " milliseconds" << endl;
    }

    return 0;
}
