/*
 * Author: Vinay Sanjekar
 *
 */

#include "common.h"
#include "Graph.h"

using namespace std;

Graph::Graph(int gt, int n, int rept){

	//Create vertices
	V = new Vertex[n];
	gtype = gt;
	rep = rept;

	// Create a grpah of n vertices with rep_type representation
	// Adjacency list representation of a graph is efficient on sparse
	// graphs.
	if(rept == ADJ_LIST_REP){

	    //  Fill the adjacency list of each vertex.

	}
	else if(rept == ADJ_MATRIX_REP){

	}
}

void Graph::insertEdge(Vertex u, Vertex v){

	if(rep == ADJ_LIST_REP){
	    // Insert vertex v in the list of u.
	    // AdjList[u].insert(v);
	}
	else if(rep == ADJ_MATRIX_REP){

	}

}
