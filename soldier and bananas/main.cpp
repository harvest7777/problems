// https://codeforces.com/problemset/problem/546/A
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  int cur_banana_cost;
  int total_money;
  int wanted_banans;

  cin >> cur_banana_cost;
  cin >> total_money;
  cin >> wanted_banans;

  int cost_banans = 0;
  int mult = 1;
  for (size_t i = 0; i < wanted_banans; i++) {
    cost_banans += mult * cur_banana_cost;
    mult++;
  }
  int borrow = max(cost_banans - total_money, 0);
  cout << borrow << endl;
  return 0;
}
