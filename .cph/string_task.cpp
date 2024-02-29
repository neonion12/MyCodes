#include <bits/stdc++.h>
using namespace std;
int main()
{
    // read input string
    string s;
    cin >> s;

    // define a string to store the output
    string output = "";

    // iterate over each character in the input string
    for (int i = 0; i < s.length(); i++)
    {
        // get the lowercase version of the current character
        char c = tolower(s[i]);

        // check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            // if it is a vowel, skip it
            continue;
        }
        else
        {
            // if it is a consonant, add a dot and the lowercase version of the consonant to the output string
            output += '.';
            output += c;
        }
    }

    // output the resulting string
    cout << output << endl;

    return 0;
}