// link: https://cses.fi/problemset/task/1754
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(ll a, ll b) {
  if (a * 2 == b) {
    return true;
  }
  if (a == b) {
    if (a % 3 == 0) {
      return true;
    } else {
      return false;
    }
  }
  double y = (2 * b - a) / 3.0;
  double x = -(b - 2 * a) / 3.0;
  if (x >= 0 && y >= 0 && x == (int)x && y == (int)y) {
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
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
