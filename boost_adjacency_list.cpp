#include <boost/graph/adjacency_list.hpp>
#include <string>

struct VertexProperty {
    std::string name;
    int weight;

    // Constructor for convenience
    VertexProperty(const std::string& n, int w) : name(n), weight(w) {}
};

typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, VertexProperty> Graph;

int main() {
    Graph g;

    // Adding vertices with custom properties
    Graph::vertex_descriptor v1 = boost::add_vertex(VertexProperty("A", 10), g);
    Graph::vertex_descriptor v2 = boost::add_vertex(VertexProperty("B", 20), g);

    // Adding an edge between vertices
    boost::add_edge(v1, v2, g);

    return 0;
}
