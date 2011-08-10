/*
 * Heap implementation
 */
#include <iostream>

#include "Heap.h"

using namespace std;

template<class Elem>
Heap<Elem>::Heap(int heap_type){

	htype=heap_type;
	cout<<"Hi. Heap created."<<endl;
}

/*
void Heap::heap_print(){

	vector<Elem>::iterator it;

	for(it=heap.begin(); it<heap.end(); it++){

		cout<<" "<<*it;
	}
}

Elem Heap::heap_extract_root(){

	return heap[0];
}

void Heap::maxheap_insert(Elem e){

	// Insert the element at the leaf node first
	static int i=0;
	heap[i++]=e;
	heap_print();
}

void Heap::minheap_insert(Elem e){

	// Insert the element at the leaf node first
}

void Heap::heap_insert(Elem e){

	if(this.type==MINHEAP){

		minheap_insert(e);
	}
	else if(this.type==MAXHEAP){

		maxheap_insert(e);
	}
}
*/

/*
int main(){

	Heap<int> h1(1);
	
}
*/
