// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(int r, int b, int d) {
  int extra = max(r, b) - min(r, b);
  int max_extra_in_packet = ceil(float(extra) / min(r, b));
  if (max_extra_in_packet > d) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int r;
    int b;
    int d;
    cin >> r;
    cin >> b;
    cin >> d;
    solve(r, b, d);
  }
  return 0;
}
