// https://usaco.org/index.php?page=viewproblem2&cpid=567
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  freopen("paint.in", "r", stdin);
  // the following line creates/overwrites the output file
  freopen("paint.out", "w", stdout);
  int a;
  int b;
  int c;
  int d;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  if (a > c) {
    swap(a, c);
    swap(b, d);
  }
  int sub = max(0, c - b);
  int total = max(b, d) - a - sub;
  cout << total << endl;
  return 0;
}
