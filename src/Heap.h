/*
 * Generic min and max heap data structures 
 */

#include <vector>

#ifndef HEAP_H_
#define HEAP_H_

#define MIN_HEAP 0
#define MAX_HEAP 1

/* Heap of key value pair */
template <class K, class V>
class Heap{

	private:
	/* Vector for holding the elements of the heap */
	std::vector<K> hKeyVector;
	std::vector<V> hValVector;
	/* Type of heap. min/max heap.*/
	int htype;
	int hsize;

	/* These functions will be used internally for inserting into heap. */
	void insertMinHeap(K e);
	void insertMaxHeap(K e);

	public:
	    Heap(int ht);

	    void insert(K key);
	    K extractRoot();
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
void Heap<K, V>::insertMaxHeap(K key){

        // Insert the element at the leaf node first
}

template<class K, class V>
void Heap<K, V>::insertMinHeap(K key){

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

	do{
	    if(((htype==MIN_HEAP)&&(hKeyVector[current-1] < hKeyVector[parent-1])) ||
	       ((htype==MAX_HEAP)&&(hKeyVector[current-1] > hKeyVector[parent-1]))){

			// swap
			temp=hKeyVector[current-1];
			hKeyVector[current-1]=hKeyVector[parent-1];
			hKeyVector[parent-1]=temp;

			current=parent;
			parent=(current/2);
		}
		else{
			// no need to go further up in the tree
			break;
		}
	}
	while(current!=1);
}

#endif 
