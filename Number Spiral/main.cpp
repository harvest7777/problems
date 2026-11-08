// link: https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll r, ll c) {
  ll n = max(r, c);
  // cout << "n" << n << endl;
  ll lower = n * n + 1;
  ll upper = (n + 1) * (n + 1);
  ll left;
  ll top;

  if (n % 2 == 1) {
    top = lower;
    left = upper;
  } else {
    top = upper;
    left = lower;
  }

  ll mid = (upper + lower) / 2;
  // cout << "mid: " << mid << endl;

  // cout << "left: " << left << endl;
  // cout << "top: " << top << endl;

  bool go_left = r == n;
  // cout << "goleft" << go_left << endl;
  ll multiplier = 1;
  ll diff = abs(r - n) + abs(c - n);
  if (go_left) {
    if (left < mid) {
      multiplier = -1;
    }
  } else {
    if (top < mid) {
      multiplier = -1;
    }
  }

  return mid + (diff * multiplier);

  // should you subtract or add?
  // > have abs distance
  // > if going up
  //    > if top is smaller, subtract
  // > if going left
  //    > if left is smaller, subtract
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll r;
    ll c;
    cin >> r;
    cin >> c;

    r--;
    c--;
    // cout << r << ' ' << c << endl;
    cout << solve(r, c) << endl;
    // cout << "\n\n\n";
  }
  return 0;
}
