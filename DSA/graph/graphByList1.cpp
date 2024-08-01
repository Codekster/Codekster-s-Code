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
    Lisr(){
        for(int i=0;i<10;i++){
            adjList[i]=NULL;
        }

        noVertex=0;
    }

    void addVertex(){
        if(noVertex>=0 && noVertex<10)
        {
            noVertex++;
            cout<<noVertex<<" added"<<endl;
        }

        void addEdge(int source,int destination){
            myGraph *new_node=new myGraph(destination);
            new_node->next=adjList[source-1];
            adjList[source-1]=new_node;

            new_node=new myGraph(source);
            new_node->next=adjList[destination-1];
            adjList[destination-1]=new_node;

            cout<<source<<" "<<destination<<" added"<<endl;
        }
    }

    void print(){
        for(int j=0;j<10;j++){
            myGraph *temp=adjList[j];
            while(temp!=NULL){
                cout<<temp->vertex<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};


int main(){
    
}