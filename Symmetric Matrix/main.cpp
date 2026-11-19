// link: https://codeforces.com/problemset/problem/1426/B
// need at least one square that has for the middle
// ax
// xb
//
// for the first diagnoal axis
// and either a square that has
//
// ax
// yb
//
// ay
// xb
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(vector<vector<int>> tiles, int m) {
  if (m % 2 == 1) {
    cout << "NO\n";
    return;
  }
  // for (auto v : tiles) {
  //   cout << v[0] << ' ' << v[1] << endl;
  // }
  // 0 1
  // 2 3
  for (int i = 0; i < tiles.size(); i += 2) {
    if (tiles[i][1] == tiles[i + 1][0]) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int n;
    int m;
    cin >> n;
    cin >> m;
    vector<vector<int>> tiles;
    int tiles_halves = n * 2;
    // cout << "doing n tiles: " << n << endl;
    // cout << "with m: " << m << endl;
    while (tiles_halves--) {
      int top;
      int bottom;
      cin >> top;
      cin >> bottom;
      // cout << "top: " << top << " bottom: " << bottom << endl;
      tiles.push_back({top, bottom});
    }

    solve(tiles, m);
  }
  return 0;
}
