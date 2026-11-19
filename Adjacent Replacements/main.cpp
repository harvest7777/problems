// link: https://cses.fi/problemset/task/1624
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll n;
    cin >> n;
    if (n % 2 == 0) {
      cout << n - 1 << ' ';
    } else {
      cout << n << ' ';
    }
  }
  return 0;
}
