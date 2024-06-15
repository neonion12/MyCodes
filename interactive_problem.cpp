#include <iostream>
#include <string>
using namespace std;

int main() {
    int min = 0;
    int max = 1000000;
    int guess;

    for (int i = 0; i < 25; i++) {
        // Calculate the middle value for the current range
        guess = (min + max) / 2;
        cout << guess << endl;

        string response;
        cin >> response;

        if (response == "Bigger") {
            min = guess + 1;
        } else if (response == "Smaller") {
            max = guess - 1;
        } else {
            // Bingo! We found the number, so we can exit.
            break;
        }
    }

    return 0;
}
