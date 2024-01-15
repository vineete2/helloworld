#include <boost/graph/adjacency_list.hpp>
#include<iostream>
#include <utility>

using namespace boost;

adjacency_list<> g;

 // adds four vertices to the graph
 adjacency_list<>::vertex_descriptor v1 = add_vertex(g);
 adjacency_list<>::vertex_descriptor v2 = add_vertex(g);
 adjacency_list<>::vertex_descriptor v3 = add_vertex(g);
 adjacency_list<>::vertex_descriptor v4 = add_vertex(g);

 std::cout << v1 << ", " << v2 << ", " << v3 << ", " << v4 << '\n';

 // gets vertices
typedef adjacency_list<>::vertex_iterator iterator;
std::pair<iterator, iterator> p = vertices(g);

 // prints vertices: 0, 1, 2, 3
 for(auto it = p.first; it ! p.second; ++it)
   std::cout<< *it << std: endl;
 // prints std::size_t
 std::cout<< typeid(v1).name() << std::endl;


std::pair<adjacency_list<>::edge_descriptor, bool> p;

 // adds four edges to the graph
 D = add_edge(v1, v2, g):
 P - edd_edge(v2, v3, g);
 P - add_edge(v3, v4, g);
 D . add_edge(v4, v1, g):
 // accesses and prints the edges: (0,1), (1,2), (2,3), (3,0)
 auto P - edges(g):
 for (auto it -p.first; it ١٠ p.second; ++it)
   std: cout cc "it << stdisendl;
