// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
 * n total videos
 * the final answer has to have total videos addd up to n
 * we only need to count how many videos in each post.
 * we just need to know...
 * given an array of ints size n, and a target k posts, is it possible to divide
 * the videos in k groups with the same sum?
 * chronological order make this trivial.
 * must use all the videos, so the duration must be:
 * total sum / k or else it is impossible
 */

// returns the vector of coutns of videos per post or empty if not possible
vector<ll> solve(vector<ll> &videos, int posts) {
  ll total = 0;
  for (auto v : videos) {
    total += v;
  }
  if (total % posts != 0) {
    return {};
  }
  ll need = total / posts;
  ll cur_sum = 0;
  ll count = 0;
  vector<ll> res = {};
  for (auto length : videos) {
    cur_sum += length;
    count++;
    if (cur_sum == need) {
      res.push_back(count);
      cur_sum = 0;
      count = 0;
    }
  }
  if (cur_sum != 0) {
    return {};
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 1;
  int k = 0;
  cin >> n; // delete for single-test problems (CSES, USACO)
  cin >> k;
  vector<ll> videos = {};
  while (n--) {
    int x;
    cin >> x;
    videos.push_back(x);
  }
  auto res = solve(videos, k);
  if (res.size() == 0) {
    cout << "No\n";
  } else {
    cout << "Yes\n";
  }
  for (auto v : res) {
    cout << v << ' ';
  }
  return 0;
}
