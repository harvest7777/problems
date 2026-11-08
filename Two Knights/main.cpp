// link: https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// there are only at most 8 places where yuo can not place the other knight

ll solve(ll n) {
  ll ways_to_fit = 2 * (n - 1) * (n - 2);
  ll bad = max(0LL, ways_to_fit);
  ll combos = (n * n) * (n * n - 1) / 2;
  return combos - 2 * bad;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  for (ll i = 1; i <= t; i++) {
    cout << solve(i) << endl;
  }

  return 0;
}
