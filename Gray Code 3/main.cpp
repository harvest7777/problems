// link: https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  t--;
  vector<string> base = {"0", "1"};
  while (t--) {
    vector<string> cur;
    for (auto b : base) {
      cur.push_back("0" + b);
    }
    for (int i = base.size() - 1; i > -1; i--) {
      cur.push_back("1" + base[i]);
    }
    base = cur;
  }
  for (auto b : base) {
    cout << b << '\n';
  }
  return 0;
}
