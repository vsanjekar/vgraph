/*
 * Author: Vinay Sanjekar
 */

#include <iostream>
#include <string>

#include "Node.h"

using namespace std;

Node::Node(){
	
	// TODO initialize to a proper value
	static int id=0;

	nid=id++;
	weight=1;
	desc="Node";
	cout<<"I am Node id-"<<nid<<" with weight "<<weight<<". Description: "<<desc<<endl;
}
