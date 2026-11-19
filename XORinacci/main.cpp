// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll zero, ll one, ll n) {
  vector<ll> rems(9);
  rems[0] = zero;
  rems[1] = one;

  // cout << "0: " << zero << endl;
  // cout << "1: " << one << endl;
  ll cur = 0;
  for (ll i = 2; i <= 8; i++) {
    cur = zero ^ one;
    // cout << i << ": " << cur << endl;
    rems[i] = cur;
    zero = one;
    one = cur;
  }
  return rems[n % 9];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll zero;
    ll one;
    ll n;
    cin >> zero;
    cin >> one;
    cin >> n;
    cout << solve(zero, one, n) << '\n';
  }
  return 0;
}
