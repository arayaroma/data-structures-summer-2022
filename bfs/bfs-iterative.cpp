#include <iostream>
#include <queue>
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
void bfsIterative(Graph &graph, int startVertex);

int main() {
  Graph graph(54);
  loadGraph(graph);
  graph.printGraph();

  std::cout << "BFS Iterative: ";
  bfsIterative(graph, 0);

  return EXIT_SUCCESS;
}

void bfsIterative(Graph &graph, int startVertex) {
  std::queue<int> queue;

  queue.push(startVertex);
  while (!queue.empty()) {
    int currentVertex = queue.front();
    queue.pop();

    if (!graph.visited[currentVertex]) {
      std::cout << currentVertex << " ";
      graph.visited[currentVertex] = true;
    }

    for (int i = 0; i < graph.adjList[currentVertex].size(); i++) {
      int adjacentVertex = graph.adjList[currentVertex][i];
      if (!graph.visited[adjacentVertex])
        queue.push(adjacentVertex);
    }
  }
}

void loadGraph(Graph &graph) {
  graph.addEdge(0, 1);
  graph.addEdge(0, 13);
  graph.addEdge(0, 12);
  graph.addEdge(1, 2);
  graph.addEdge(1, 12);
  graph.addEdge(1, 11);
  graph.addEdge(2, 3);
  graph.addEdge(2, 11);
  graph.addEdge(3, 4);
  graph.addEdge(3, 10);
  graph.addEdge(3, 9);
  graph.addEdge(4, 9);
  graph.addEdge(4, 5);
  graph.addEdge(5, 6);
  graph.addEdge(5, 9);
  graph.addEdge(6, 7);
  graph.addEdge(6, 8);
  graph.addEdge(7, 8);
  graph.addEdge(7, 19);
  graph.addEdge(7, 20);
  graph.addEdge(8, 9);
  graph.addEdge(8, 18);
  graph.addEdge(9, 17);
  graph.addEdge(9, 18);
  graph.addEdge(10, 11);
  graph.addEdge(10, 17);
  graph.addEdge(11, 12);
  graph.addEdge(11, 17);
  graph.addEdge(12, 15);
  graph.addEdge(13, 14);
  graph.addEdge(14, 26);
  graph.addEdge(15, 16);
  graph.addEdge(15, 25);
  graph.addEdge(16, 25);
  graph.addEdge(17, 24);
  graph.addEdge(18, 19);
  graph.addEdge(18, 24);
  graph.addEdge(19, 20);
  graph.addEdge(19, 23);
  graph.addEdge(20, 21);
  graph.addEdge(20, 22);
  graph.addEdge(21, 22);
  graph.addEdge(21, 33);
  graph.addEdge(22, 23);
  graph.addEdge(23, 24);
  graph.addEdge(23, 33);
  graph.addEdge(24, 25);
  graph.addEdge(25, 26);
  graph.addEdge(25, 31);
  graph.addEdge(26, 27);
  graph.addEdge(27, 29);
  graph.addEdge(28, 29);
  graph.addEdge(30, 31);
  graph.addEdge(30, 40);
  graph.addEdge(31, 32);
  graph.addEdge(31, 37);
  graph.addEdge(32, 37);
  graph.addEdge(33, 34);
  graph.addEdge(33, 36);
  graph.addEdge(34, 35);
  graph.addEdge(35, 47);
  graph.addEdge(36, 37);
  graph.addEdge(37, 38);
  graph.addEdge(37, 46);
  graph.addEdge(38, 39);
  graph.addEdge(38, 44);
  graph.addEdge(38, 45);
  graph.addEdge(40, 41);
  graph.addEdge(41, 43);
  graph.addEdge(42, 43);
  graph.addEdge(42, 53);
  graph.addEdge(43, 44);
  graph.addEdge(46, 49);
  graph.addEdge(46, 50);
  graph.addEdge(46, 51);
  graph.addEdge(47, 48);
  graph.addEdge(51, 52);
  graph.addEdge(52, 53);
}