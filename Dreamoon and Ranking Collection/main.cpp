// link: https://codeforces.com/problemset/problem/1330/A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(vector<bool> places, int x) {
  int usages = x;
  for (int i = 0; i < places.size(); i++) {
    if (!places[i]) {
      if (usages > 0) {
        usages--;
      } else {
        cout << i << '\n';
        return;
      }
    }
  }
  cout << places.size() << '\n';
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int n;
    int x;
    cin >> n;
    cin >> x;
    vector<bool> places(300, false);
    while (n--) {
      int place;
      cin >> place;
      place--;
      places[place] = true;
    }
    solve(places, x);
  }
  return 0;
}
