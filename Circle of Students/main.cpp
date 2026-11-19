// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int n;
    cin >> n;
    string res = "YES\n";
    int allowed = n - 1;
    int prev;
    cin >> prev;
    n--;
    while (n--) {
      int cur;
      cin >> cur;
      if (abs(cur - prev) != 1 && abs(cur - prev) != allowed) {
        res = "NO\n";
      }
      prev = cur;
    }
    cout << res;
  }
  return 0;
}
