// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll k) {
  ll pairs = (k * k) * (k * k - 1) / 2;
  if (k <= 2) {
    return pairs;
  }
  ll attacking_knights = (k - 2) * (k - 1) * 4;
  return pairs - attacking_knights;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  for (ll i = 1; i <= t; i++) {
    cout << solve(i) << '\n';
  }
  return 0;
}
