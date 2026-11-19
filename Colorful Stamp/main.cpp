// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(string s) {
  // cout << "SOLVING FOR: " << s << endl;
  int red = 0;
  int blue = 0;

  int left = 0;
  int right = s.size() - 1;
  while (s[left] == 'W') {
    left++;
  }
  while (s[right] == 'W') {
    right--;
  }
  // cout << "LEFT: " << left << " RIGHT: " << right << endl;
  if (left > right) {
    cout << "YES\n";
    return;
  }
  for (int i = left; i <= right; i++) {
    if (s[i] == 'R') {
      red++;
    }
    if (s[i] == 'B') {
      blue++;
    }

    if (s[i] == 'W') {
      if ((blue > 0 && red == 0) || (red > 0 && blue == 0)) {
        cout << "NO\n";
        return;
      }
      red = 0;
      blue = 0;
    }
  }

  if ((blue > 0 && red == 0) || (red > 0 && blue == 0)) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int len;
    cin >> len;
    string s = "";
    while (len--) {
      char ch;
      cin >> ch;
      s += ch;
    }

    solve(s);
  }
  return 0;
}
