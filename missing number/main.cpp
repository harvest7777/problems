// https://cses.fi/problemset/task/1083
#include <iostream>
#include <sys/types.h>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  unsigned long long length;
  cin >> length;

  unsigned long long target = (length * (length + 1)) / 2;
  unsigned long long have = 0;

  while (length > 1) {
    unsigned long long x;
    cin >> x;
    have = have + x;
    length--;
  }
  cout << target - have;
  return 0;
}
