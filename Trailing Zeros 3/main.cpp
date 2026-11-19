// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  int res = 0;
  while (t >= 5) {
    res += floor(t / 5);
    t /= 5;
  }
  cout << res << endl;
  return 0;
}
