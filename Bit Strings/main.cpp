// link: https://cses.fi/problemset/task/1617
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  ll res = 1;
  ll BIG = 1000000007;
  for (size_t i = 0; i < t; i++) {
    res = res * 2;
    res = res % BIG;
  }

  cout << res;
  return 0;
}
