// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  vector<string> prev = {"0", "1"};
  for (int i = 1; i < t; i++) {
    vector<string> cur = {};
    for (int j = 0; j < prev.size(); j++) {
      cur.push_back("0" + prev[j]);
    }
    for (int j = prev.size() - 1; j > -1; j--) {
      cur.push_back("1" + prev[j]);
    }
    prev = cur;
  }
  for (auto s : prev) {
    cout << s << '\n';
  }
  return 0;
}
