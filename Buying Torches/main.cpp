#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll sticks_for_one, ll sticks_for_coal, ll torches) {
  // start with 1 stick
  ll wanted_sticks = torches + sticks_for_coal * torches;
  ll needed_trades =
      (wanted_sticks - 1 + sticks_for_one - 2) / (sticks_for_one - 1) + torches;
  return needed_trades;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    ll sticks_for_one;
    ll sticks_for_coal;
    ll torches;
    cin >> sticks_for_one;
    cin >> sticks_for_coal;
    cin >> torches;
    cout << solve(sticks_for_one, sticks_for_coal, torches) << '\n';
  }
  return 0;
}
