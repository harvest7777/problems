// https://usaco.org/index.php?page=viewproblem2&cpid=987
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  freopen("word.in", "r", stdin);
  freopen("word.out", "w", stdout);
  vector<string> words;
  int word_count;
  int line_width;
  cin >> word_count;
  cin >> line_width;
  for (size_t i = 0; i < word_count; i++) {
    string x;
    cin >> x;
    words.push_back(x);
  }
  /* never put whitespace eol
   * check if is last word
   *
   * can do this printer style, state is always correct for the current line
   * cur chars used, cur word is all ill need. can iterate through cur word*/
  int chars_used = 0;
  bool is_first_word = true;
  for (int i = 0; i < words.size(); i++) {
    int space_needed = words[i].size();
    bool can_add = (chars_used + space_needed) <= line_width;
    if (can_add) {
      if (!is_first_word) {
        cout << ' ';
      }
      cout << words[i];
    } else {
      cout << '\n' << words[i];
      chars_used = 0;
    }

    chars_used += space_needed;
    is_first_word = false;
  }
  return 0;
}
