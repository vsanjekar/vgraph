/*
 * Generic min and max heap data structures 
 */
#include <vector>

#define MIN_HEAP 0
#define MAX_HEAP 1

template <class Elem>
class Heap{

	private:
	/* Type of heap. min/max heap.*/
	int htype;
	/* Maintain a root pointer and a current leaf pointer to insert the
	 * elements */
	std::vector<Elem> heap;

	public:
	    Heap(int ht);

	/* These functions will be used internally for inserting into heap. */
	    /*
	    void minheap_insert(Elem e);
	    void maxheap_insert(Elem e);

	    void heap_print();
	    void heap_insert(Elem e);
	    Elem heap_extract_root();
	    */
};
 
