#include "common.h" 

#include "Graph.h"
#include "Heap.h"

using namespace std;

int main(){

	int i=0;

	/* Heaps */
	/*
	Heap<int> h1(MIN_HEAP);
	Heap<int, int> h2(MAX_HEAP);

	for (i=32; i>0; i--){
		h1.insert(i);
	}
	for (i=0; i<32; i++){
		h2.insert(i);
	}
	h1.print();
	h2.print();
	*/

	/* Graphs */
	Graph *G1 = new Graph(4, UNDIRECTED, ADJ_MATRIX_REP);
	Graph *G2 = new Graph(8, UNDIRECTED, ADJ_LIST_REP);
	Graph *G3 = new Graph("examples/line", UNDIRECTED, ADJ_LIST_REP);

	G1->insertEdge(1, 2);
	G1->insertEdge(1, 4);
	G1->insertEdge(1, 3);
	G1->insertEdge(4, 2);

	G1->listVertices();
	G1->listEdges();

	G2->insertEdge(1, 2);
	G2->insertEdge(1, 4);
	G2->insertEdge(1, 7);
	G2->insertEdge(4, 5);
	G2->insertEdge(6, 8);
	G2->insertEdge(5, 3);

	G2->listVertices();
	G2->listEdges();

	G3->listVertices();
	G3->listEdges();

}
