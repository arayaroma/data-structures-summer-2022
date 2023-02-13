#include <iostream>
#include <stack>
#include <vector>

class Graph {
public:
  int numberOfVertices;
  std::vector<std::vector<int>> adjList;
  std::vector<bool> visited;

  Graph(int numberOfVertices) : numberOfVertices(numberOfVertices) {
    adjList.resize(numberOfVertices);
    visited.resize(numberOfVertices, false);
  }

  void addEdge(int source, int destiny) {
    adjList[source].push_back(destiny);
    adjList[destiny].push_back(source);
  }

  void printGraph() {
    int i, j;
    for (i = 0; i < numberOfVertices; i++) {
      std::cout << "Vertex " << i << " -> ";
      for (j = 0; j < adjList[i].size(); j++) {
        std::cout << adjList[i][j] << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
};

void loadGraph(Graph &graph);
void dfsRecursive(Graph &graph, int startVertex);

int main() {
  Graph graph(5);
  loadGraph(graph);
  graph.printGraph();

  std::cout << "DFS Recursive: ";
  dfsRecursive(graph, 0);

  return EXIT_SUCCESS;
}

void dfsRecursive(Graph &graph, int currentVertex) {
  std::cout << currentVertex << " ";
  graph.visited[currentVertex] = true;

  for (int i = 0; i < graph.adjList[currentVertex].size(); i++) {
    int adjacentVertex = graph.adjList[currentVertex][i];
    if (!graph.visited[adjacentVertex])
      dfsRecursive(graph, adjacentVertex);
  }
}

void loadGraph(Graph &graph) {
  graph.addEdge(0, 1);
  graph.addEdge(0, 2);
  graph.addEdge(0, 3);
  graph.addEdge(1, 2);
  graph.addEdge(2, 3);
  graph.addEdge(2, 4);
}