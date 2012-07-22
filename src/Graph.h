#ifndef _GRAPH_H
#define _GRAPH_H

#define UNDIRECTED 0x01 
#define DIRECTED 0x02 
#define UNWEIGHTED 0x04
#define WEIGHTED 0x08 

#define ADJ_LIST_REP 1
#define ADJ_MATRIX_REP 2

/*
 * Vertices and edges are the basic components of any graph. (or hypergraph).
 * Here a vertex can represent anything. It has a vertex identifier and a 
 * description.
 */

#ifndef _GRAPH_H
#define _GRAPH_H
class Vertex{

        friend class Graph;

        private:
            static int id;
	    /*
             * Some unique identifier for each node.
             * Vertex weight
             * Optional description of the vertex
             * TODO Vertex data should be a generic type.
	     */
            unsigned int vid;
            int weight;
            std::string desc;
            void* vdata;

            /* 
             * Constructors. Vertex is not instantiable.
	     */
            Vertex();
            Vertex(int w);
};
typedef Vertex Node;

class Graph{

	/*
	 * Each graph can be uniquely identified by a gid
	 * Type of a graph (Directed or Undirected) and representation to use
	 * Number of vertices
	 * Vertices
	 * Edges: representedas Adjacency list of adjacency matrix
	 */
	int gid;
	unsigned int type, rep;
	int N;
	Vertex *V;
	std::vector<Vertex> Vv;
	int **AdjMatrix;
	std::vector<int> **AdjList;

	public:
	    Graph(int n, int gtype, int rep);
	    void listVertices();
	    void listEdges();
	    void insertEdge(int u, int v);
	    void insertEdge(int u, int v, int w);
	    void draw();
};
#endif
