#include<iostream>
using namespace std;

class myGraph{
    public:
    int vertex;
    myGraph *next;

    myGraph(int v){
        vertex=v;
        next=NULL;
        
    }
};

class List{
    myGraph *adjList[10];
    int noVertex;

    public:
    
}