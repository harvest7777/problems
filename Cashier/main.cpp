// link: https://codeforces.com/problemset/problem/1059/A
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(vector<ll> &arrivals, vector<ll> &service_times, ll shift_length,
           ll smoke_break_length) {
  std::cout << std::fixed << std::setprecision(0);
  if (arrivals.size() == 0) {
    cout << floor(shift_length / smoke_break_length) << endl;
    return;
  }

  // we can have breaks between customers
  // we can have breaks before the first customer arrives
  // we can have breaks after the last customer leaves
  ll res = 0;
  for (ll i = 0; i < arrivals.size() - 1; i++) {
    ll gap = arrivals[i + 1] - (arrivals[i] + service_times[i]);
    res += floor(gap / smoke_break_length);
  }
  res += floor(arrivals[0] / smoke_break_length);
  res += floor((shift_length - (arrivals[arrivals.size() - 1] +
                                service_times[service_times.size() - 1])) /
               smoke_break_length);
  cout << res << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  ll L;
  ll a;
  cin >> n;
  cin >> L;
  cin >> a;

  // they already are in order in hwen the customers
  // arrive and itsguaranteed that these customers will not
  // overlap in times.
  vector<ll> customer_arrivals = {};
  vector<ll> service_times = {};
  for (ll i = 0; i < n; i++) {
    ll c;
    cin >> c;
    ll service_time;
    cin >> service_time;
    customer_arrivals.push_back(c);
    service_times.push_back(service_time);
  }
  solve(customer_arrivals, service_times, L, a);
  return 0;
}
