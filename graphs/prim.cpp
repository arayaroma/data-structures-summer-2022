#include <iostream>
#include <limits>
#include <queue>
#include <vector>

using std::greater;
using std::make_pair;
using std::pair;
using std::priority_queue;
using std::vector;

const int MAX_VERTICES = 100000;
const int INF = std::numeric_limits<int>::max();

vector<vector<pair<int, int>>> graph(MAX_VERTICES);
vector<int> distance(MAX_VERTICES, INF);
vector<bool> visited(MAX_VERTICES, false);

int prim(int start) {
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;

  distance[start] = 0;
  pq.push({0, start});

  int treeWeight = 0;
  while (!pq.empty()) {
    int currentVertex = pq.top().second;
    pq.pop();

    if (visited[currentVertex])
      continue;

    visited[currentVertex] = true;
    treeWeight += distance[currentVertex];

    for (auto neighbor : graph[currentVertex]) {
      if (!visited[neighbor.first] &&
          neighbor.second < distance[neighbor.first]) {
        distance[neighbor.first] = neighbor.second;
        pq.push({distance[neighbor.first], neighbor.first});
      }
    }
  }

  return treeWeight;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v, w;
    std::cin >> u >> v >> w;
    graph[u].push_back(make_pair(v, w));
    graph[v].push_back(make_pair(u, w));
  }

  std::cout << prim(1) << std::endl;

  return 0;
}