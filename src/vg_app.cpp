#include "common.h" 

#include "Graph.h"
#include "Heap.h"

using namespace std;

int main(){

	int i=0;

	/* Heaps */
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

	/* Graphs */
	Graph *G = new Graph(UNDIRECTED, 8, ADJ_LIST_REP);
}
