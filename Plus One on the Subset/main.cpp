// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(vector<int> &nums) {
  ll sum = 0;
  for (auto n : nums) {
    sum += n;
  }
  ll target = sum / nums.size();
  // cout << "target: " << target << endl;
  set<int> diffs;
  set<int> diffs_negative;
  for (auto n : nums) {
    ll diff = target - n;
    if (diff > 0) {
      diffs.insert(diff);
    } else {
      diffs_negative.insert(-diff);
    }
  }
  ll prev = 0;
  ll res = 0;
  for (auto s : diffs) {
    res += (s - prev);
    prev = s;
  }
  prev = 0;
  for (auto s : diffs_negative) {
    res += (s - prev);
    prev = s;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t; // delete for single-test problems (CSES, USACO)
  while (t--) {
    ll size;
    cin >> size;
    vector<int> arr;
    while (size--) {
      ll n;
      cin >> n;
      arr.push_back(n);
    }
    cout << solve(arr) << '\n';
  }
  return 0;
}
