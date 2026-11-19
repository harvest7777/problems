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
ll solve(ll measures, ll flip_intervla, ll leave) {
  ll last_flip_time = (leave / flip_intervla) * flip_intervla;
  // cout << "last flip time: " << last_flip_time << endl;
  if (measures == flip_intervla || flip_intervla > measures) {
    ll fell = leave - last_flip_time;
    return max(0LL, measures - fell);
  } else {
    ll total_flips = last_flip_time / flip_intervla;
    // cout << "total_flips: " << total_flips << endl;
    ll start;
    if (total_flips % 2 == 0) {
      start = measures;
    } else {
      start = flip_intervla;
    }
    // cout << "start: " << start << endl;
    ll fell = leave - last_flip_time;
    // cout << "fell: " << fell << endl;
    return start - fell;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    ll measures;
    ll flips;
    ll leaves;
    cin >> measures;
    cin >> flips;
    cin >> leaves;
    cout << solve(measures, flips, leaves) << '\n';
  }
  return 0;
}
