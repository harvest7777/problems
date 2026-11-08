// link: https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 * 1 -> 1
 * 1 2 -> 3
 * 1 2 3 -> 6
 * 1 2 3 4 -> 10
 * 1 2 3 4 5 -> 15
 * 1 2 3 4 5 6 -> 21
 * 1 2 3 4 5 6 7 -> 28
 * 1 2 3 4 5 6 7 8 -> 36
 * 1 2 3 4 5 6 7 8 9 -> 45
 * 1 2 3 4 5 6 7 8 9 10 -> 55
 * 1 2 3 4 5 6 7 8 9 10 11 -> 66
 *
 * 1 2 4 7 8 11
 * 3 5 6 9 10
 *
 */

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  ll sum = (t) * (t + 1) / 2;
  if (sum % 2 == 1) {
    cout << "NO" << endl;
    return 0;
  }

  // always possible if the sum is even
  cout << "YES" << endl;

  if (t % 2 == 0) {
    // same amount of nums per set
    ll cur = 1;
    cout << t / 2 << endl;
    ll pair_sum = t + 1;
    for (size_t j = 0; j < t / 4; j++) {
      cout << cur << ' ' << pair_sum - cur << ' ';
      cur++;
    }
    cout << endl;
    cout << t / 2 << endl;
    for (size_t j = 0; j < t / 4; j++) {
      cout << cur << ' ' << pair_sum - cur << ' ';
      cur++;
    }
  } else {
    ll cur = 1;
    cout << t / 2 << endl;
    ll pair_sum = t;
    for (size_t j = 0; j < t / 4; j++) {
      cout << cur << ' ' << pair_sum - cur << ' ';
      cur++;
    }
    cout << t << endl;

    cout << t / 2 + 1 << endl;
    for (size_t j = 0; j < t / 4 + 1; j++) {
      cout << cur << ' ' << pair_sum - cur << ' ';
      cur++;
    }
  }
  return 0;
}
