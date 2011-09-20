/*
 * Generic min and max heap data structures 
 */

#include <vector>
#include <math.h>

#ifndef HEAP_H_
#define HEAP_H_

#define MIN_HEAP 0
#define MAX_HEAP 1

/* This will be used for variable number of arguments in template */
class Empty{};

/* Heap of key value pair. The value part is optional */
template <class K, class V=Empty>
class Heap{

	private:
	/* Vector for holding the elements of the heap */
	std::vector<K> hKeyVector;
	std::vector<V> hValVector;
	/* Type of heap. min/max heap.*/
	bool htype;
	/* Heap size*/
	int hsize;

	public:
	    Heap(int ht);

	    K extractRoot();
	    void deleteRoot();
	    void insert(K key);
	    void print();

};

template<class K, class V>
Heap<K, V>::Heap(int heap_type){

        htype=heap_type;
	hsize=0;
        std::cout<<"Hi. Heap created. type="<<htype<<" size="<<hsize<<std::endl;
}

template<class K, class V>
void Heap<K, V>::print(){

	// TODO typename is required here. 
        typename std::vector<K>::iterator it;
	int i=0, hdepth;

	hdepth=log2(hsize)+1;

	std::cout<<hdepth<<std::endl;
	// for(i=0; i<
        for(it=hKeyVector.begin(); it<hKeyVector.end(); it++){

            std::cout<<*it<<" ";
        }
	std::cout<<std::endl;
}

template<class K, class V>
K Heap<K, V>::extractRoot(){

        return hKeyVector[0];
}

template<class K, class V>
void Heap<K, V>::deleteRoot(){

	int current=1;

	if(hsize==1){
	    hKeyVector.pop_back();
	    return;
	}

	// Replace the root by the last leaf element
	hKeyVector[0]=hKeyVector[hsize-1];
	hKeyVector.pop_back();

	// Heapify
	while( ((htype==MIN_HEAP) && (hKeyVector[current-1] > hKeyVector[2*current-1]) ) ||
	       ((htype==MIN_HEAP) && (hKeyVector[current-1] > hKeyVector[2*current]) )||
	       ((htype==MAX_HEAP) && (hKeyVector[current-1] < hKeyVector[2*current-1]) )||
	       ((htype==MAX_HEAP) && (hKeyVector[current-1] < hKeyVector[2*current]) ) ) {

	    // Swap

	}
}

template<class K, class V>
void Heap<K, V>::insert(K key){

	int current, parent;
	K temp;

        // Insert the element at the leaf node first
	// TODO push_back() is more efficient or resize()
	hKeyVector.push_back(key);
	hsize++;
	// Heapify the heap now
	current=hsize;
	parent=(current/2);

	// If the heap size was 0, then we are good to return 
	if(hsize<=1){
	    return;
	}

	// Heapify the heap.
	do{
	    if( ( (htype==MIN_HEAP)&&(hKeyVector[current-1] < 
		   hKeyVector[parent-1]) ) ||
	        ( (htype==MAX_HEAP)&&(hKeyVector[current-1] >
		   hKeyVector[parent-1]) ) ){

			// swap
		    temp=hKeyVector[current-1];
		    hKeyVector[current-1]=hKeyVector[parent-1];
		    hKeyVector[parent-1]=temp;

		    current=parent;
		    parent=(current/2);
	    } else{
		    // no need to go further up in the tree
		    break;
	    }
	}
	while(current!=1);
}

#endif 
