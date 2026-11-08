// link: https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(ll a, ll b) {
  if (a == b) {
    if (a % 3 == 0) {
      return true;
    }
    return false;
  }
  if (a * 2 == b) {
    return true;
  }
  double x = (2 * b - a) / 3.0;
  double y = -(b - 2 * a) / 3.0;
  if (x == ll(x) && y == (ll)y && x >= 0 && y >= 0) {
    return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll x;
    ll y;
    cin >> x;
    cin >> y;
    bool res = solve(min(x, y), max(x, y));
    if (res) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
