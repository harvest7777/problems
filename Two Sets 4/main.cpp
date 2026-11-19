// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  ll sum = (t) * (t + 1) / 2;
  if (sum % 2 != 0 || (t % 4 != 0 && t % 4 != 3)) {
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";
  if (t % 2 == 0) {
    ll target = t + 1;
    ll pairs = t / 4;
    ll cur = 1;
    cout << pairs * 2 << '\n';
    for (int i = 0; i < pairs; i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
    cout << '\n';
    cout << pairs * 2 << '\n';
    for (int i = 0; i < pairs; i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
  } else {
    ll target = t;
    ll pairs = t / 4;
    ll cur = 1;
    cout << pairs * 2 + 1 << '\n';
    for (int i = 0; i < pairs; i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
    cout << t << '\n';
    cout << (pairs + 1) * 2 << '\n';
    for (int i = 0; i < (pairs + 1); i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
  }
  return 0;
}
