#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll l, ll r, ll d) {
  if (l > d) {
    return d;
  }
  return ceil((float)(r + 1) / d) * d;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    ll l;
    ll r;
    ll d;
    cin >> l;
    cin >> r;
    cin >> d;

    cout << solve(l, r, d) << '\n';
  }
  return 0;
}
