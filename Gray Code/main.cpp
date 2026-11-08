// link: https://cses.fi/problemset/task/2205
#include <algorithm>
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
    vector<string> temp = {};
    for (size_t j = 0; j < prev.size(); j++) {
      temp.push_back("0" + prev[j]);
    }
    for (size_t j = prev.size() - 1; j < -1; j--) {
      temp.push_back("1" + prev[j]);
    }
    prev = temp;
  }
  for (auto st : prev) {
    cout << st << '\n';
  }
  return 0;
}
