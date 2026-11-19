// link: https://codeforces.com/problemset/problem/1742/C
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(vector<string> board, char check) {
  bool row_good = false;
  bool col_good = false;
  for (size_t r = 0; r < 8; r++) {
    bool this_row_good = true;
    for (size_t c = 1; c < 8; c++) {
      if (board[r][c] != check) {
        this_row_good = false;
        break;
      }
      if (board[r][c] != board[r][c - 1]) {
        this_row_good = false;
        break;
      }
    }
    if (this_row_good) {
      row_good = true;
      break;
    }
  }
  if (row_good) {
    return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    vector<string> board;
    for (size_t i = 0; i < 8; i++) {
      string row;
      cin >> row;
      board.push_back(row);
    }
    if (solve(board, 'R')) {
      cout << 'R' << '\n';
    } else {
      cout << 'B' << '\n';
    }
  }

  return 0;
}
