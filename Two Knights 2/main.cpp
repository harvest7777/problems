// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  for (size_t i = 1; i < t + 1; i++) {
    ll area = i * i;
    ll can = (area) * (area - 1) / 2;
    ll three_by_twos = (i - 1) * (i - 2) * 2;
    ll cant = three_by_twos * 2;
    cout << can - cant << '\n';
  }
  return 0;
}
