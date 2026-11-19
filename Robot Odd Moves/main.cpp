// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int a, int b) {
  int x = 0;
  int y = 0;
  int moves = 0;
  for (int i = 0; i < b; i++) {
    moves++;
    y += 1;
    if (x == a && y == b) {
      return moves;
    }
    x += 1;

    if (x == a && y == b) {
      return moves;
    }
  }
  int leftover = a - x;
  if (a - x < 0) {
    return -1;
  }
  moves += leftover;
  if (leftover % 2 == 1) {
    moves++;
  }
  return moves;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout << solve(a, b) << '\n';
  }
  return 0;
}
