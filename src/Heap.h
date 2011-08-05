/*
 * Generic min and max heap data structures 
 */

#define MINHEAP 0
#define MAXHEAP 1

class Heap_Node{

	public:
	    Heap_Node *parent;
	    Heap_Node *left, *right;
};

template <class Elem>
class Heap{

	private:
	/* Type of heap. min/max heap.*/
	int type;
	/* Maintain a root pointer and a current leaf pointer to insert the
	 * elements */
	Heap_Node *root;
	Heap_Node *leaf;

	/* These functions will be used internally for inserting into heap. */
	void minheap_insert(Elem e);
	void maxheap_insert(Elem e);

	public:
	    Heap();
	    void heap_insert(Elem e);
	    Elem heap_extract_root();
};
 
