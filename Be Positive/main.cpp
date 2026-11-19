// link: https://codeforces.com/problemset/problem/1130/A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  int needed_positives = ceil(t / 2.0);
  int positives = 0;
  int negatives = 0;
  while (t--) {
    int n;
    cin >> n;
    if (n > 0) {
      positives++;
    }
    if (n < 0) {
      negatives++;
    }
  }
  if (positives >= needed_positives) {
    cout << 1 << endl;
  } else if (negatives >= needed_positives) {
    cout << -1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
