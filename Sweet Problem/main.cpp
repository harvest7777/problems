#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cdiv(ll a, ll b) {
  // only works for pos where a>=0 & b>0
  // b-1 < b and will never bump twice
  // if a%b>=1, that will add at least 1 and at most b-1
  // to the numerator, and will bump at most 1.
  return (a + b - 1) / b;
}
ll solve(ll most, ll mid, ll least) {
  // cout << "most: " << most << endl;
  // cout << "mid: " << mid << endl;
  // cout << "least: " << least << endl;
  ll pairs = 0;
  ll extra = most - mid;
  // cout << "extra: " << extra << endl;

  // how many pairs can we make with the extra?
  ll can_pair = min(extra, least);
  pairs += can_pair;
  least -= can_pair;
  most -= can_pair;

  // at this point, most and mid is as close as they can be.
  ll bigger_half = cdiv(least, 2);
  ll smaller_half = least / 2;

  // cout << "bigger_half: " << bigger_half << endl;
  // cout << "smaller_half: " << smaller_half << endl;

  pairs += bigger_half;
  pairs += smaller_half;
  most -= bigger_half;
  mid -= smaller_half;

  // cout << "most: " << most << endl;
  // cout << "mid: " << mid << endl;
  pairs += min(most, mid);
  return pairs;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    ll a;
    ll b;
    ll c;
    cin >> a;
    cin >> b;
    cin >> c;
    vector<ll> nums = {};
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end());
    cout << solve(nums[2], nums[1], nums[0]) << '\n';
  }
  return 0;
}
