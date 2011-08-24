/*
 * Author: Vinay Sanjekar
 */

#include <iostream>
#include <string>

#include "Vertex.h"

using namespace std;

Vertex::Vertex(){
	
	// TODO initialize to a proper value
	static int id=0;

	vid=id++;
	weight=1;
	desc="Vertex";
	cout<<"I am Vertex id-"<<vid<<" with weight "<<weight<<". Description: "<<desc<<endl;
}
