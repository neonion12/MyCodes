#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  map<string, string> language_map;
  for (int i = 0; i < m; i++) {
    string a, b;
    cin >> a >> b;
    language_map[a] = b;
    language_map[b] = a;
  }

  vector<string> lecture_text;
  vector<string> lecture_notes;

  // Read the lecture text.
  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;
    lecture_text.push_back(word);
  }


  for (string word : lecture_text) {

    if (language_map[word].length() < word.length()) {
      lecture_notes.push_back(language_map[word]);
    } else {
      lecture_notes.push_back(word);
    }
  }

  for (string word : lecture_notes) {
    cout << word << " ";
  }
  cout << endl;

  return 0;
}
