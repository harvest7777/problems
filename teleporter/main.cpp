// https://usaco.org/index.php?page=viewproblem2&cpid=807
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  freopen("teleport.in", "r", stdin);
  // the following line creates/overwrites the output file
  freopen("teleport.out", "w", stdout);
  int a;
  int b;
  int c;
  int d;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  if (a > b) {
    swap(a, b);
  }
  if (c > d) {
    swap(c, d);
  }

  int mindist = b - a;
  int teleporterdist = abs(c - a) + abs(d - b);

  cout << min(mindist, teleporterdist) << endl;
  return 0;
}
