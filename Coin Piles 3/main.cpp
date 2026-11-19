// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(int a, int b) {
  double x = (b - 2 * a) / (-3.0);
  double y = (2 * b - a) / 3.0;
  if (int(x) == x && x >= 0 && int(y) == y && y >= 0) {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int a;
    int b;
    cin >> a;
    cin >> b;
    solve(min(a, b), max(a, b));
  }
  return 0;
}
