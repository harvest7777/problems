// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<ll, vector<ll>> solve(vector<ll> &nums) {
  vector<ll> res(nums.size());
  for (size_t i = 0; i < nums.size(); i++) {
    if (nums[i] != -1) {
      res[i] = nums[i];
    }
  }
  ll diff = 0;
  for (size_t i = 1; i < res.size(); i++) {
    diff += (res[i] - res[i - 1]);
  }

  // cout << "diff: " << diff << endl;

  if (diff > 0 && nums[0] == -1) {
    res[0] = diff;
    diff = 0;
  }
  if (diff < 0 && nums[nums.size() - 1] == -1) {
    res[res.size() - 1] = -1 * diff;
    diff = 0;
  }
  return {diff, res};
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    int n;
    cin >> n;
    vector<ll> nums;
    while (n--) {
      ll x;
      cin >> x;
      nums.push_back(x);
    }
    auto res = solve(nums);
    cout << abs(res.first) << '\n';
    for (auto r : res.second) {
      cout << r << ' ';
    }
    cout << '\n';
  }
  return 0;
}
