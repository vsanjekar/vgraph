/*
 * Nodes and edges are the basic components of any graph. (or hypergraph).
 * Here a node can represent anything. It has a node identifier and a 
 * description.
 */

#ifndef _NODE_H
#define _NODE_H
class Node{

	// Node id should be a generic type.
	int nid;
	std::string desc;

	public:
	    Node();
};
#endif
