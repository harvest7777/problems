// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll n) {
  ll avail = (n * n) * (n * n - 1) / 2;
  if (n <= 2) {
    return avail;
  }
  ll cant = (n - 2) * (n - 1) * 4;
  return avail - cant;
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
