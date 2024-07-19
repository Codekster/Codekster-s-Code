#include<iostream>
using namespace std;

class graph{
    public:
    int g1[6][6];
    int data;

    graph(int value){
        data=value;

        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                 g1[i][j]=0;
            }
           
        }
    }

    void addEdge(int source,int destination){
        // connecting two vertices of a graph
        g1[source][destination]=1;
        g1[destination][source]=1;// since the graph is undirected

    }
// printing the graph
    void printGraph(){
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                cout<<g1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    graph ob1(5);
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<"Do you want to connect "<<i<<" & "<<j<<" ? "<<endl<<"if yes press 1 else 0 ";
            int flag;
            cin>>flag;
            if(flag==1){
                ob1.addEdge(i,j);
            }
         
            
        }
    }
cout<<endl;
    ob1.printGraph();
    

}