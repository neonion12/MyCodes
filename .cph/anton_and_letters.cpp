#include <iostream>
#include <set>
using namespace std;

int main() {
    string input;
    getline(cin, input); // Read the input line

    set<char> distinctLetters; // Create a set to store distinct letters

    for (char c : input) {
        if (isalpha(c)) {
            distinctLetters.insert(c); // Insert the letter into the set
        }
    }

    cout << distinctLetters.size() << endl; // Output the number of distinct letters
    return 0;
}
