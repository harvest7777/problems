#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  int res = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b + c >= 2) {
      res++;
    }
  }
  cout << res << endl;
  return 0;
}
