// link:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll RED = 2;
  ll GREEN = 5;
  ll BLUE = 8;

  ll friends;
  ll sheets;
  cin >> friends;
  cin >> sheets;
  RED *= friends;
  GREEN *= friends;
  BLUE *= friends;
  ll res = 0;
  res += ceil((float)RED / sheets);
  res += ceil((float)GREEN / sheets);
  res += ceil((float)BLUE / sheets);
  cout << res << endl;
  return 0;
}
