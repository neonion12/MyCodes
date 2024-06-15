#include <iostream>
using namespace std;

int main()
{
    string names[5] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
    int sides[5] = {4, 6, 8, 12, 20};
    int t, s = 0;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        for (int i = 0; i < 5; i++)
        {
            if (x == names[i])
            {
                s += sides[i];
            }
        }
    }
    cout << s;

    return 0;
}
