// https://cses.fi/problemset/task/1068
#include <iostream>
#include <sys/types.h>
using namespace std;

int main(int argc, char *argv[]) {
  u_long n;
  cin >> n;
  while (true) {
    cout << n << " ";

    if (n == 1) {
      break;
    }

    if (n % 2 == 1) {
      n = n * 3 + 1;
    } else {
      n = n / 2;
    }
  }

  return 0;
}
