/*
 * Author: Vinay Sanjekar
 *
 */

#include "common.h"
#include "Graph.h"

using namespace std;

Graph::Graph(int gt, int n, int repr){

    // Each graph can be uniquely identified by a gid
    gid=0;
	//Create vertices
	V = new Vertex[n];
	gtype = gt;
	rep = repr;

    AdjMatrix = NULL;
    AdjList = NULL;
	// Create a grpah of n vertices with rep_type representation
	if(repr == ADJ_MATRIX_REP){

	    AdjMatrix = new int*[n];
	    for(int i=0; i<n; i++){

            AdjMatrix[i] = new int[n];
	    }

	}
	// Adjacency list representation of a graph is efficient on sparse
	// graphs.
	else if(repr == ADJ_LIST_REP){

	    //  Fill the adjacency list of each vertex.
        AdjList = new list<Vertex>[n];

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
