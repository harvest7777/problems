// link: https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  ll res = 0;
  while (t >= 5) {
    res += t / 5;
    t /= 5;
  }
  cout << res << endl;
  return 0;
}
