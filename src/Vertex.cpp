/*
 * Author: Vinay Sanjekar
 */

#include "common.h"

#include "Vertex.h"

using namespace std;

/* Initialize static member of class */
int Vertex::id=0;

/* Default constructor */
Vertex::Vertex(){
	
	// Vertex ids start at 0

	vid=id++;
	weight=1;
	desc="Vertex";
	cout<<"I am Vertex id-"<<vid<<" with weight "<<weight<<". Description: "<<desc<<endl;
}

/* Parameterized constructor. Create a vertex with wight w. */
Vertex::Vertex(int w){

}
