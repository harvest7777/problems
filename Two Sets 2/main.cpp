// link: https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  ll sum = (t) * (t + 1) / 2;
  if (sum % 2 == 1) {
    cout << "NO";
    return 0;
  }

  cout << "YES\n";
  ll total_pairs = t / 2;
  ll target = t;
  if (t % 2 == 0) {
    target = t + 1;
  }
  if (total_pairs % 2 == 0) {
    ll pairs = total_pairs / 2;

    cout << pairs * 2 << '\n';
    ll cur = 1;
    for (size_t i = 1; i <= pairs; i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
    cout << '\n' << pairs * 2 << '\n';
    for (size_t i = 1; i <= pairs; i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
  } else {
    ll pairs_in_first_half = floor(total_pairs / 2.0);
    ll pairs_in_second_half = ceil(total_pairs / 2.0);

    cout << pairs_in_first_half * 2 + 1 << '\n';
    ll cur = 1;
    for (size_t i = 1; i <= pairs_in_first_half; i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
    cout << t;
    cout << '\n' << pairs_in_second_half * 2 << '\n';
    for (size_t i = 1; i <= pairs_in_second_half; i++) {
      cout << cur << ' ' << target - cur << ' ';
      cur++;
    }
  }

  return 0;
}
