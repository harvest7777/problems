// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  ll zero = 0;
  ll one = 1;
  if (t == 0) {
    cout << 0 << endl;
    return 0;
  }
  if (t == 1) {
    cout << 1 << endl;
    return 0;
  }
  ll cur = -1;
  ll mod = 1e9 + 7;
  for (ll i = 2; i <= t; i++) {
    // at this point, one is always i-1 and zero is i-2
    cur = zero + one;
    cur %= mod;
    zero = one;
    one = cur;
  }
  cout << cur << endl;
  return 0;
}
