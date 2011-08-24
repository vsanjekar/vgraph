#include <iostream>

#include "Vertex.h"
#include "Heap.h"

using namespace std;

int main(){

	int i=0;

	Vertex *v=new Vertex();

	Heap<int, int> h(MIN_HEAP);
	for (i=15; i>0; i--){
	
		h.insert(i);
	}
	h.print();

}
