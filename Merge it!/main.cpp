#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
using ll = long long;

ll cdiv(ll a, ll b) {
  // only works for pos where a>=0 & b>0
  // b-1 < b and will never bump twice
  // if a%b>=1, that will add at least 1 and at most b-1
  // to the numerator, and will bump at most 1.
  return (a + b - 1) / b;
}
int solve(vector<int> &nums) {
  unordered_map<int, int> rems;
  for (auto n : nums) {
    rems[n % 3]++;
  }
  int two_one = min(rems[2], rems[1]);
  rems[2] -= two_one;
  rems[1] -= two_one;

  return rems[0] + two_one + rems[1] / 3 + rems[2] / 3;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums;
    while (n--) {
      int x;
      cin >> x;
      nums.push_back(x);
    }
    cout << solve(nums) << '\n';
  }
  return 0;
}
