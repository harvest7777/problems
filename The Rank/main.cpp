// link: https://codeforces.com/problemset/problem/1017/A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  int thomas_score = 0;
  vector<int> scores;
  for (int student = 1; student <= t; student++) {
    int cur_student_score = 0;
    for (size_t i = 0; i < 4; i++) {
      int s;
      cin >> s;
      cur_student_score += s;
    }
    scores.push_back(cur_student_score);
    if (student == 1) {
      thomas_score = cur_student_score;
    }
  }
  sort(scores.begin(), scores.end(), greater<int>());
  for (size_t rank = 0; rank < scores.size(); rank++) {
    if (scores[rank] == thomas_score) {
      cout << rank + 1 << endl;
      return 0;
    }
  }
  return 0;
}
