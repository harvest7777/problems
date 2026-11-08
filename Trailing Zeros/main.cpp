// link: https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  ll res = 0;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t >= 1) {
    res += t / 5;
    t = t / 5;
  }
  cout << res << endl;
  return 0;
}
