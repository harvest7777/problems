// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(int a, int b, int n, int S) {
  int used_n = min(a, (S / n));
  return b >= S - (n * used_n);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int a;
    int b;
    int n;
    int S;
    cin >> a;
    cin >> b;
    cin >> n;
    cin >> S;

    if (solve(a, b, n, S)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
