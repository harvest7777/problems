// link: https://cses.fi/problemset/task/1623/
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
using ll = long long;

ll solve(vector<ll> apples, int cur_index, ll target, ll have) {
  if (target - have <= 0 || cur_index == apples.size()) {
    return have;
  }

  auto dont_take = solve(apples, cur_index + 1, target, have);
  auto take = solve(apples, cur_index + 1, target, have + apples[cur_index]);
  if (abs(target - take) < abs(target - dont_take)) {
    return take;
  } else {
    return dont_take;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  vector<ll> apples;
  ll sum = 0;
  while (t--) {
    ll a;
    cin >> a;
    apples.push_back(a);
    sum += a;
  }
  ll target = sum / 2;
  auto res = solve(apples, 0, target, 0);
  ll other = sum - res;
  cout << abs(other - res) << endl;

  return 0;
}
