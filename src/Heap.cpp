/*
 * Heap implementation
 */

#include "Heap.h"

Heap::Heap(int heap_type){

	type=heap_type;
	root=NULL;
	leaf=NULL;

}

Elem Heap::heap_extract_root(){

}

void Heap::maxheap_insert(Elem e){

	// Insert the element at the leaf node first
}

void Heap::minheap_insert(Elem e){


}

void Heap::heap_insert(Elem e){

	if(this.type==MINHEAP){

		minheap_insert(e);
	}
	else if(this.type==MAXHEAP){

		maxheap_insert(e);
	}
}

