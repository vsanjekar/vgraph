/*
 * Generic min and max heap data structures 
 */

#include <vector>

#ifndef HEAP_H_
#define HEAP_H_

#define MIN_HEAP 0
#define MAX_HEAP 1

template <class T>
class Heap{

	private:
	/* Type of heap. min/max heap.*/
	int htype;
	/* Maintain a root pointer and a current leaf pointer to insert the
	 * elements 
	 */
	std::vector<T> heapVector;
	/* These functions will be used internally for inserting into heap. */
	void insertMinHeap(T e);
	void insertMaxHeap(T e);

	public:
	    Heap(int ht);

	    void print();
	    void insert(T e);
	    T extractRoot();
};

template<class T>
Heap<T>::Heap(int heap_type){

        htype=heap_type;
        std::cout<<"Hi. Heap created."<<std::endl;
}

template<class T>
void Heap<T>::print(){

        typename std::vector<T>::iterator it;

        for(it=heapVector.begin(); it<heapVector.end(); it++){

                std::cout<<" "<<*it;
        }
}

template<class T>
T Heap<T>::extractRoot(){

        return heapVector[0];
}

template<class T>
void Heap<T>::insertMaxHeap(T e){

        // Insert the element at the leaf node first
        static int i=0;
        heapVector[i++]=e;
        print();
}

template<class T>
void Heap<T>::insertMinHeap(T e){

        // Insert the element at the leaf node first
}

template<class T>
void Heap<T>::insert(T e){

        if(this.type==MAX_HEAP){

                insertMaxHeap(e);
        }
        else if(this.type==MIN_HEAP){

                insertMinHeap(e);
        }
}

#endif 
