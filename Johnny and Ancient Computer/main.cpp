// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll a, ll b) {
  // assume a<b
  if (b % a != 0) {
    return -1;
  }
  ll quotient = b / a;
  ll used = 0;
  while (quotient != 1 && quotient % 8 == 0) {
    quotient /= 8;
    used++;
  }
  while (quotient != 1 && quotient % 4 == 0) {
    quotient /= 4;
    used++;
  }
  while (quotient != 1 && quotient % 2 == 0) {
    quotient /= 2;
    used++;
  }
  if (quotient != 1) {
    return -1;
  }
  return used;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll a;
    ll b;
    cin >> a;
    cin >> b;

    cout << solve(min(a, b), max(a, b)) << '\n';
  }
  return 0;
}
