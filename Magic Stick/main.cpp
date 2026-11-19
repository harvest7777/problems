// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll tests;
  cin >> tests;
  while (tests--) {
    ll have;
    ll want;

    cin >> have;
    cin >> want;
    if (have == 2) {
      have = 3;
    }

    if (have <= 3) {
      if (have >= want) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}
