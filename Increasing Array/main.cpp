// link: https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  ll max = 0;
  ll res = 0;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll cur;
    cin >> cur;
    if (cur < max) {
      res = res + (max - cur);
    } else {
      max = cur;
    }
  }
  cout << res;
  return 0;
}
