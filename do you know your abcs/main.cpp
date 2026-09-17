// https://usaco.org/index.php?page=viewproblem2&cpid=1059
#include <iostream>
#include <vector>
using namespace std;

template <typename T> void qs(int l, int r, vector<T> &arr) {
  // sorts l,r inclusive
  if (l >= r) {
    return;
  }
  int pi = l;
  // make sure all #s < pivot on left, > on right
  for (int i = l; i <= r; i++) {
    int tempi = i;
    while (arr[tempi] <= arr[pi] && tempi > pi) {
      swap(arr[tempi], arr[tempi - 1]);
      tempi--;
      if (tempi == pi) {
        pi++;
      }
    }
  }
  qs(l, pi - 1, arr);
  qs(pi + 1, r, arr);

  // cout << "pi: " << pi << endl;
  // for (size_t i = 0; i < arr.size(); i++) {
  //   cout << arr[i] << ' ';
  // }
  // cout << endl;
}
int main(int argc, char *argv[]) {
  vector<int> arr;
  // vector<int> arr = {2, 2, 11, 4, 9, 7, 9};
  for (size_t i = 0; i < 7; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  qs(0, arr.size() - 1, arr);
  int a = arr[0];
  int abc = arr[arr.size() - 1];
  int target = abc - a;
  int l = 1;
  int r = arr.size() - 2;
  while (l < r) {
    int s = arr[l] + arr[r];
    if (s > target) {
      r--;
    } else if (s < target) {
      l++;
    } else {
      cout << a << ' ' << arr[l] << ' ' << arr[r] << endl;
      return 0;
    }
  }

  return 0;
}
