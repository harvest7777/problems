// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  int odds = 0;
  int evens = 0;

  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int n;
    cin >> n;
    if (n % 2 == 0) {
      evens++;
    } else {
      odds++;
    }
  }
  if (evens > odds) {
    cout << odds << endl;
  } else {
    cout << evens << endl;
  }
  return 0;
}
