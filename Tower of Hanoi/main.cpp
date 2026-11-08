// link: https://cses.fi/problemset/task/2165
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(int n, int p_from, int p_to) {
  if (n == 0) {
    return;
  }
  if (n == 1) {
    cout << p_from << ' ' << p_to << '\n';
    return;
  }
  int total_pegs = 3 + 2 + 1;
  int free_p = total_pegs - p_from - p_to;
  solve(n - 1, p_from, free_p);
  cout << p_from << ' ' << p_to << '\n';
  solve(n - 1, free_p, p_to);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  int moves = 1;
  for (int i = 1; i < t; i++) {
    moves = moves * 2 + 1;
  }
  cout << moves << '\n';
  solve(t, 1, 3);
  return 0;
}
