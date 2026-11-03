#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;
  int res = 1;
  int cur = 1;
  for (int i = 0; i < s.size(); i++) {
    if (i > 0 && s[i] == s[i - 1]) {
      cur++;
    } else {
      cur = 1;
    }
    res = max(res, cur);
  }
  cout << res;
  return 0;
}
