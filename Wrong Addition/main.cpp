// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string solve(ll a, ll s) {
  string res = "";
  while (a > 0) {
    ll d = a % 10;
    // cout << "working on a: " << d << endl;
    a /= 10;
    ll x = s % 10;
    s /= 10;

    if (d <= x) {
      res += to_string(x - d);
    } else {
      ll another = s % 10;
      s /= 10;
      x = another * 10 + x;

      ll potential_digit = x - d;
      if (potential_digit < 10 && potential_digit >= 0) {
        res += to_string(potential_digit);
      } else {
        return "-1";
      }
    }
    // cout << "used x: " << x << endl;
  }

  // at this point, we have the answer but backwards.
  while (s > 0) {
    res += to_string(s % 10);
    s /= 10;
  }
  // cout << "still have: " << s << endl;
  ll end = res.size() - 1;
  while (end > 0 && res[end] == '0') {
    end--;
  }
  string real_res = "";
  while (end > -1) {
    real_res += res[end];
    end--;
  }
  return real_res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll a;
    ll s;
    cin >> a;
    cin >> s;
    cout << solve(a, s) << '\n';
  }
  return 0;
}
