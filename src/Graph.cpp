/*
 * Author: Vinay Sanjekar
 *
 */

#include "common.h"
#include "Graph.h"

using namespace std;

/*********************************************
 * Vertex definitions.
 ********************************************/

/* 
 * Initialize static member of class 
 */
int Vertex::id=0;

/* 
 * Default constructor. 
 */
Vertex::Vertex(){

        // Vertex ids start at 0
        vid=++id;
        weight=1;
        desc="Vertex";
        cout<<"Vertex id="<<vid<<", weight="<<weight<<". Description: "
	    <<desc<<endl;
}

/* Parameterized constructor. Create a vertex with wight w. */
Vertex::Vertex(int w){

        // Vertex ids start at 0
        vid=++id;
        weight=w;
        desc="Vertex";
        cout<<"Vertex id="<<vid<<", weight="<<weight<<". Description: "
	    <<desc<<endl;
}

/*********************************************
 * Graph definitions. 
 ********************************************/
Graph::Graph(int nV, int gtype, int grep){

        /* 
         * Each graph can be uniquely identified by a gid
         * Create a grpah of n vertices with rep_type representation
         */
        gid=0;
        type = gtype;
        rep = grep;
        N = nV;

	V = new Vertex[N];
	for(int i=0; i<N; i++){
	    Vv.push_back(V[i]);
	}

        if(grep == ADJ_MATRIX_REP){
            /* Array of adjacency vectors(linear algebra) for each vertex.*/
            AdjMatrix = new int*[N];
            for(int i=0; i<N; i++){
                AdjMatrix[i] = new int[N];
            }
        }
        /* 
         * Adjacency list representation of a graph is efficient on sparse
         * graphs.
         */
        if(grep == ADJ_LIST_REP){

            //  Fill the adjacency list of each vertex.
            AdjList = new vector<int>*[N];
            for(int i=0; i<N; i++){
                AdjList[i] = new vector<int>;
            }

        }
}

void Graph::listVertices(){
        vector<Vertex>::iterator it;

        cout<<"Vertices"<<endl;
	for(int i=0; i<N; i++){
            cout<<Vv[i].vid<<" "<<V[i].vid<<endl;
	}
}

void Graph::listEdges(){

        cout<<"Edges"<<endl;
	if(rep == ADJ_MATRIX_REP){
            
            for(int i=0; i<N; i++){

                int *vector = AdjMatrix[i];
                for(int j=0; j<N; j++){
                    if (vector[j]) {
                        cout<<(i+1)<<"-"<<(j+1)<<endl;
                    }
                }
            }
        }

	if(rep == ADJ_LIST_REP){

            for(int i=0; i<N; i++){
                int size = AdjList[i]->size();
                for(int j=0; j<size; j++) {
                        cout<<(i+1)<<"-"<<(((*AdjList[i])[j])+1)<<endl;
                }
            }
        }
}

void Graph::insertEdge(int u, int v){

        insertEdge(u, v, 1);
}

void Graph::insertEdge(int u, int v, int weight){

	if(rep == ADJ_MATRIX_REP){
            AdjMatrix[u-1][v-1] = weight;
            if (type == UNDIRECTED) {
                AdjMatrix[v-1][u-1] = weight;
            }
	}

	if(rep == ADJ_LIST_REP){
	    // Insert vertex v in the list of u.
	    AdjList[u-1]->push_back(v-1);
            if (type == UNDIRECTED) {
	        AdjList[v-1]->push_back(u-1);
	    }
	}

}

void Graph::draw(){
	/*
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (1.0, 1.0, 1.0);
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f (0.25, 0.25, 0.0);
	glVertex3f (0.75, 0.25, 0.0);
	glVertex3f (0.75, 0.75, 0.0);
	glVertex3f (0.25, 0.75, 0.0);
	glEnd();
	glFlush();
	*/
}
