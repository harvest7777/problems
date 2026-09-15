// https://cses.fi/problemset/task/1068
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  long long n;
  cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2 == 1) {
      n = n * 3 + 1;
    } else {
      n = n / 2;
    }
    cout << n << " ";
  }
  cout << "\n";
  return 0;
}
