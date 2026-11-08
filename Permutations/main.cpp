// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  if (t == 1) {
    cout << 1;
    return 0;
  }
  if (t <= 3) {
    cout << "NO SOLUTION";
  } else {
    int cur;
    if (t % 2 == 0) {
      cur = 2;
    } else {
      cur = 1;
    }
    while (cur <= t) {
      cout << cur << ' ';
      cur = cur + 2;
    }
    if (t % 2 == 0) {
      cur = 1;
    } else {
      cur = 2;
    }

    while (cur <= t) {
      cout << cur << ' ';
      cur = cur + 2;
    }
  }
  return 0;
}
