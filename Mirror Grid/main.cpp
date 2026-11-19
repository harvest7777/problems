// link:
#include <bits/stdc++.h>
#include <cstddef>
using namespace std;
using ll = long long;

pair<int, int> ninety(int i, int j, int n) { return {j, n - i - 1}; };

pair<int, int> one_eighty(int i, int j, int n) {
  return {n - i - 1, n - j - 1};
};

pair<int, int> two_seventy(int i, int j, int n) { return {n - j - 1, i}; };

void solve() {}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int counts;
    cin >> counts;
    int n = counts;

    vector<string> board;
    while (counts--) {
      string row;
      cin >> row;
      board.push_back(row);
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        // cout << i << ", " << j << endl;
        auto rotated_ninety = ninety(i, j, n);
        // cout << "90: " << rotated_ninety.first << ", " <<
        // rotated_ninety.second
        //      << endl;

        auto rotated_one_eighty = one_eighty(i, j, n);
        // cout << "180: " << rotated_one_eighty.first << ", "
        //      << rotated_one_eighty.second << endl;
        auto rotated_two_seventy = two_seventy(i, j, n);
        // cout << "270: " << rotated_two_seventy.first << ", "
        //      << rotated_two_seventy.second << endl;

        int ones = 0;
        int zeros = 0;
        if (board[i][j] == '1') {
          ones += 1;
        } else {
          zeros += 1;
        }
        if (board[rotated_ninety.first][rotated_ninety.second] == '1') {
          ones += 1;
        } else {
          zeros += 1;
        }
        if (board[rotated_one_eighty.first][rotated_one_eighty.second] == '1') {
          ones += 1;
        } else {
          zeros += 1;
        }
        if (board[rotated_two_seventy.first][rotated_two_seventy.second] ==
            '1') {
          ones += 1;
        } else {
          zeros += 1;
        }
        // cout << "ones: " << ones << endl;
        // cout << "zeros: " << zeros << endl;
        board[i][j] = '1';
        board[rotated_ninety.first][rotated_ninety.second] = '1';
        board[rotated_one_eighty.first][rotated_one_eighty.second] = '1';
        board[rotated_two_seventy.first][rotated_two_seventy.second] = '1';
        res += (4 - max(ones, zeros));
        // cout << endl;
        // cout << endl;
      }
    }
    cout << res << endl;
  }
  return 0;
}
