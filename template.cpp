#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cdiv(ll a, ll b) {
  // only works for pos where a>=0 & b>0
  // b-1 < b and will never bump twice
  // if a%b>=1, that will add at least 1 and at most b-1
  // to the numerator, and will bump at most 1.
  return (a + b - 1) / b;
}
void solve() {}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
