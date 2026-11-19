// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool canPlace(int r, int c, vector<pair<int, int>> &pos) {
  for (auto p : pos) {
    int other_r = p.first;
    int other_c = p.second;
    if (other_c == c || other_r == r) {
      return false;
    }
    // on the same diagnoal? they will always make a square.
    if (abs(other_c - c) == abs(other_r - r)) {
      return false;
    }
  }
  return true;
}
int solve(int r, int c, vector<pair<int, int>> &pos, vector<string> &board) {
  if (pos.size() == 8) {
    return 1;
  }
  if (r == 8) {
    return 0;
  }

  int take = 0;
  int leave = 0;

  int new_r = r;
  int new_c = c;
  if (c + 1 == 8) {
    new_r++;
    new_c = 0;
  } else {
    new_c++;
  }

  if (board[r][c] == '.' && canPlace(r, c, pos)) {
    pos.push_back({r, c});
    take = solve(new_r, new_c, pos, board);
    pos.pop_back();
  }
  leave = solve(new_r, new_c, pos, board);
  return take + leave;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<pair<int, int>> pos = {};
  vector<string> board = {};
  for (size_t i = 0; i < 8; i++) {
    string row;
    cin >> row;
    board.push_back(row);
  }
  cout << solve(0, 0, pos, board);
  return 0;
}
