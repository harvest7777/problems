// link: https://cses.fi/problemset/task/1755
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
using ll = long long;

string solve(string s) {
  // even + odd + reverse even
  unordered_map<char, ll> counts;
  for (auto ch : s) {
    counts[ch]++;
  }
  char odd = ' ';
  for (const auto &[ch, count] : counts) {
    if (count % 2 == 1) {
      if (odd != ' ') {
        return "NO SOLUTION";
      } else {
        odd = ch;
      }
    }
  }
  string evens = "";

  for (const auto &[ch, count] : counts) {
    if (ch != odd) {
      for (size_t i = 0; i < count / 2; i++) {
        evens += ch;
      }
    }
  }
  string res = "";
  res += evens;
  if (odd != ' ') {
    for (size_t i = 0; i < counts[odd]; i++) {
      res += odd;
    }
  }
  string reversed(evens.rbegin(), evens.rend());
  res += reversed;
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  cout << solve(s);
  return 0;
}
