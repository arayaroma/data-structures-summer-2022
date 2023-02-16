#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

struct Edge {
  int src, dest, weight;
};

class Graph {
public:
  vector<Edge> edges;
  int V;

  Graph(int V) { this->V = V; }

  void addEdge(int src, int dest, int weight) {
    Edge edge = {src, dest, weight};
    edges.push_back(edge);
  }

  // Find set of an element i
  int find(vector<int> parent, int i) {
    if (parent[i] == -1) {
      return i;
    }
    return find(parent, parent[i]);
  }

  // Union of two sets
  void Union(vector<int> &parent, int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
  }

  // Apply Kruskal's algorithm
  void kruskalMST() {
    vector<Edge> result;
    int e = 0, i = 0;

    // Sort edges by weight
    sort(edges.begin(), edges.end(),
         [](Edge a, Edge b) { return a.weight < b.weight; });

    // Allocate memory for creating V subsets
    vector<int> parent(V, -1);

    while (e < V - 1 && i < edges.size()) {
      Edge next_edge = edges[i++];

      int x = find(parent, next_edge.src);
      int y = find(parent, next_edge.dest);

      // Add the edge to the result if including it doesn't create a cycle
      if (x != y) {
        result.push_back(next_edge);
        Union(parent, x, y);
        e++;
      }
    }

    // Print the edges of MST
    std::cout << "Edges of MST are:" << std::endl;
    for (i = 0; i < result.size(); i++) {
      std::cout << result[i].src << " -- " << result[i].dest
           << "  weight:" << result[i].weight << std::endl;
    }
  }
};

int main() {
  int V = 4;
  Graph graph(V);

  graph.addEdge(0, 1, 10);
  graph.addEdge(0, 2, 6);
  graph.addEdge(0, 3, 5);
  graph.addEdge(1, 3, 15);
  graph.addEdge(2, 3, 4);

  graph.kruskalMST();

  return 0;
}