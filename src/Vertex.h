/*
 * Author: Vinay Sanjekar
 */

/*
 * Vertices and edges are the basic components of any graph. (or hypergraph).
 * Here a node can represent anything. It has a node identifier and a 
 * description.
 */

#ifndef _NODE_H
#define _NODE_H
class Vertex{

	// Some unique identifier for each node.
	int nid;
	int weight;
	// TODO Vertex name should be a generic type.
	// <> name;
	std::string desc;

	public:
	    Vertex();
};
#endif
