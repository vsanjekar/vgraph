#include "Vertex.h"

#define UNDIRECTED 0x01 
#define DIRECTED 0x02 
#define WEIGHTED 0x04
#define UNWEIGHTED 0x08 

#define ADJ_LIST_REP 1
#define ADJ_MATRIX_REP 2

class Graph{

    // Each graph can be uniquely identified by a gid
    int gid;
	// Type of a graph (Directed or Undirected) and representation to use
	unsigned int gtype, rep;
	// Number of vertices
	int n;
	// Vertices
	Vertex *V;
	// Edges: representedas Adjacency list of adjacency matrix
	int **AdjMatrix;
	std::list<Vertex> *AdjList;

	public:
	    Graph(int gtype, int n, int rep);
	    void insertEdge(Vertex u, Vertex v);
};
