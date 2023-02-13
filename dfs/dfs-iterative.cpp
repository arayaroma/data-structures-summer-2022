#include <iostream>
#include <stack>
#include <vector>

class Graph {
public:
  int numberOfVertices;
  std::vector<std::vector<int>> adjList;

  Graph(int numberOfVertices) : numberOfVertices(numberOfVertices) {
    adjList.resize(numberOfVertices);
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
void dfsIterative(Graph &graph, int startVertex);

int main() {
  Graph graph(5);
  loadGraph(graph);
  graph.printGraph();

  dfsIterative(graph, 0);

  return EXIT_SUCCESS;
}

void dfsIterative(Graph &graph, int startVertex) {
  std::stack<int> stack;
  std::vector<bool> visited(graph.numberOfVertices, false);
  std::cout << "DFS Iterative: ";

  stack.push(startVertex);
  while (!stack.empty()) {
    int currentVertex = stack.top();
    stack.pop();

    if (!visited[currentVertex]) {
      std::cout << currentVertex << " ";
      visited[currentVertex] = true;
    }

    for (int i = 0; i < graph.adjList[currentVertex].size(); i++) {
      int adjacentVertex = graph.adjList[currentVertex][i];
      if (!visited[adjacentVertex])
        stack.push(adjacentVertex);
    }
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