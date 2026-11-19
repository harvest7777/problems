// link: https://cses.fi/problemset/task/1622
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int cur_index, string s, vector<int> chrs, vector<string> &res) {
  if (cur_index == s.size()) {
    res.push_back(s);
    return 1;
  }
  int r = 0;
  for (int i = 0; i < chrs.size(); i++) {
    if (chrs[i] > 0) {
      char c = char(i + 'a');
      s[cur_index] = c;
      chrs[i]--;
      r += solve(cur_index + 1, s, chrs, res);
      chrs[i]++;
    }
  }
  return r;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  vector<int> counts(26);
  for (auto ch : s) {
    counts[ch - 'a']++;
  }
  vector<string> res;

  cout << solve(0, s, counts, res) << '\n';
  for (auto s : res) {
    cout << s << '\n';
  }
  return 0;
}
