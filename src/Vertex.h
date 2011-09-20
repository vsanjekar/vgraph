/*
 * Author: Vinay Sanjekar
 */

/*
 * Vertices and edges are the basic components of any graph. (or hypergraph).
 * Here a vertex can represent anything. It has a vertex identifier and a 
 * description.
 */

#ifndef _NODE_H
#define _NODE_H
class Vertex{

	friend class Graph;

	// Vertex is not instantiable.
	private:
	    static int id;

	    // Some unique identifier for each node.
	    unsigned int vid;
	    // Vertex weight
	    int weight;
	    // Adjacency List
	    std::list<Vertex> *AdjList;

	    // Optional description of the vertex
	    std::string desc;
	    // TODO Vertex data should be a generic type.
	    void * vdata;

	    // Constructors
	    Vertex();
	    Vertex(int w);
};
#endif
