// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(string s) {
  int last_one = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      last_one = i;
    }
    if (s[i] == '0') {
      return i - last_one + 1;
      break;
    }
  }
  return s.size() - last_one;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    string s;
    cin >> s;
    cout << solve(s) << '\n';
  }
  return 0;
}
