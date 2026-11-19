// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cases;
  cin >> cases;
  while (cases--) {
    int t = 1;
    cin >> t; // delete for single-test problems (CSES, USACO)
    // cout << "t: " << t << endl;
    vector<vector<int>> board;
    for (size_t i = 0; i < t; i++) {
      vector<int> row = {};
      for (size_t j = 0; j < t; j++) {
        int x;
        cin >> x;
        row.push_back(x);
      }
      board.push_back(row);
    }
    int total = t * 2;
    int sum = total * (total + 1) / 2;
    vector<int> res(t * 2, -1);

    for (int i = 0; i < t; i++) {
      for (int j = 0; j < t; j++) {
        int idx = i + j + 1;
        if (res[idx] == -1) {
          sum -= board[i][j];
        }
        res[idx] = board[i][j];
      }
    }
    for (auto n : res) {
      if (n == -1) {
        cout << sum << ' ';
      } else {
        cout << n << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
