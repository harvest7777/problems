// link: https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  vector<string> prev = {"0", "1"};
  for (size_t i = 0; i < t - 1; i++) {
    vector<string> cur = {};
    for (ll j = 0; j < prev.size(); j++) {
      string s = "0" + prev[j];
      cur.push_back(s);
    }
    for (ll j = prev.size() - 1; j > -1; j--) {
      string s = "1" + prev[j];
      cur.push_back(s);
    }
    prev = cur;
  }
  for (auto var : prev) {
    cout << var << '\n';
  }
  return 0;
}
