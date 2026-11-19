// link:
#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;

int count(int cur_pin, int target_pin, int n) {
  if (n == 1) {
    return 1;
  }
  int res = 0;
  int free_pin = 6 - cur_pin - target_pin;
  res += count(cur_pin, free_pin, n - 1);
  res += 1;
  res += count(free_pin, target_pin, n - 1);
  return res;
}

void solve(int cur_pin, int target_pin, int n) {
  if (n == 1) {
    cout << cur_pin << ' ' << target_pin << '\n';
    return;
  }
  int free_pin = 6 - cur_pin - target_pin;
  solve(cur_pin, free_pin, n - 1);
  cout << cur_pin << ' ' << target_pin << '\n';
  solve(free_pin, target_pin, n - 1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  cout << count(1, 3, t) << '\n';
  solve(1, 3, t);
  return 0;
}
