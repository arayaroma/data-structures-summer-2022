#include <iostream>
#include <limits>
#include <queue>
#include <vector>

using std::greater;
using std::numeric_limits;
using std::pair;
using std::priority_queue;
using std::vector;

const int INF = numeric_limits<int>::max();
vector<vector<pair<int, int>>> adj;
vector<int> distance(adj.size(), INF);

void dijkstra(int start) {
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;

  distance[start] = 0;
  pq.push({0, start});

  while (!pq.empty()) {
    int currentVertex = pq.top().second;
    pq.pop();

    for (const auto &[adjacentVertex, edgeWeight] : adj[currentVertex]) {
      int newDistance = distance[currentVertex] + edgeWeight;
      if (newDistance < distance[adjacentVertex]) {
        distance[adjacentVertex] = newDistance;
        pq.push({newDistance, adjacentVertex});
      }
    }
  }
}

void printDijkstra() {
  for (int i = 0; i < adj.size(); i++) {
    std::cout << i << ": " << distance[i] << std::endl;
  }
}

int main() {
  int n, m, u, v, w;

  std::cin >> n >> m;
  adj.resize(n);

  for (int i = 0; i < m; i++) {
    std::cin >> u >> v >> w;
    adj[u].push_back({v, w});
  }

  dijkstra(0);
  printDijkstra();

  return 0;
}