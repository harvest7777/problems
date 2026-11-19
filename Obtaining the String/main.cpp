// link:
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
using ll = long long;

vector<int> swaps(int i, int j) {
  vector<int> res = {};
  for (int cur = i; cur < j; cur++) {
    res.push_back(cur);
  }

  for (int cur = j - 2; cur >= i; cur--) {
    res.push_back(cur);
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int len = 1;
  cin >> len; // delete for single-test problems (CSES, USACO)
  string s;
  string t;
  cin >> s;
  cin >> t;
  unordered_map<char, int> s_counts;
  unordered_map<char, int> t_counts;
  for (int i = 0; i < len; i++) {
    s_counts[s[i]]++;
    t_counts[t[i]]++;
  }
  if (s_counts != t_counts) {
    cout << -1 << endl;
    return 0;
  }

  vector<vector<int>> res = {};
  ll total = 0;
  while (s != t) {
    int bad_index = 0;
    for (int i = 0; i < len; i++) {
      if (s[i] != t[i]) {
        bad_index = i;
        break;
      }
    }
    for (int i = bad_index + 1; i < len; i++) {
      if (s[i] == t[bad_index]) {
        swap(s[bad_index], s[i]);
        // cout << "swapping: " << bad_index << ' ' << i << endl;
        vector<int> bruh = swaps(bad_index, i);
        total += bruh.size();
        res.push_back(bruh);
        break;
      }
    }
  }
  // cout << s << endl;
  // cout << t << endl;
  cout << total << endl;
  for (auto hi : res) {
    // cout << "xd" << endl;
    for (auto sw : hi) {
      cout << sw + 1 << ' ';
    }
  }
  return 0;
}
