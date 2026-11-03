// www.usaco.org/index.php?page=viewproblem2&cpid=939
#include <algorithm>
#include <climits>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <queue>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  freopen("buckets.in", "r", stdin);
  freopen("buckets.out", "w", stdout);
  vector<vector<char>> graph;
  // djikstras implementation
  vector<vector<int>> min_distances;
  for (size_t i = 0; i < 10; i++) {
    vector<int> row(10, INT_MAX);
    min_distances.push_back(row);
  }
  pair<int, int> lake;
  pair<int, int> barn;
  vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  for (size_t r = 0; r < 10; r++) {
    string row;
    cin >> row;
    vector<char> vrow;
    for (size_t c = 0; c < 10; c++) {
      vrow.push_back(row[c]);
      if (row[c] == 'B') {
        barn = {r, c};
      }
      if (row[c] == 'L') {
        lake = {r, c};
        min_distances[r][c] = 0;
      }
    }
    graph.push_back(vrow);
  }

  queue<pair<int, int>> q;
  q.push(lake);
  while (q.size() > 0) {
    int s = q.size();
    for (size_t i = 0; i < s; i++) {
      pair<int, int> cur = q.front();
      q.pop();
      for (pair<int, int> dir : dirs) {
        int new_r = cur.first + dir.first;
        int new_c = cur.second + dir.second;
        int new_distance = min_distances[cur.first][cur.second] + 1;
        bool in_bounds = new_r >= 0 && new_r < 10 && new_c >= 0 && new_c < 10;
        if (in_bounds && min_distances[new_r][new_c] > new_distance &&
            graph[new_r][new_c] != 'R') {
          q.push({new_r, new_c});
          min_distances[new_r][new_c] = new_distance;
        }
      }
    }
  }
  cout << min_distances[barn.first][barn.second] - 1 << endl;

  return 0;
}
