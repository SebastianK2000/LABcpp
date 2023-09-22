#include <iostream>
#include <vector>

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjacencyList;
    std::vector<bool> visited;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjacencyList.resize(numVertices);
        visited.resize(numVertices, false);
    }

    void addEdge(int src, int dest) {
        adjacencyList[src].push_back(dest);
        adjacencyList[dest].push_back(src);
    }
    bool hasPath(int src, int dest) {
        visited[src] = true;

        if (src == dest) {
            return true;
        }
        for (int neighbor : adjacencyList[src]) {
            if (!visited[neighbor]) {
                if (hasPath(neighbor, dest)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    int numVertices = 5;
    Graph graph(numVertices);

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 0);

    int src = 0;
    int dest = 3;
    bool hasPath = graph.hasPath(src, dest);

    if (hasPath) {
        std::cout << "Istnieje sciezka miedzy wierzcholkami " << src << " i " << dest << std::endl;
        } else {

            std::cout << "Nie istnieje sciezka miedzy wierzcholkami " << src << " i " << dest << std::endl;
        }

        return 0;
}




