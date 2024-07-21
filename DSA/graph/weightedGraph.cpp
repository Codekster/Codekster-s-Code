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

    void addWeight(int source,int destination, int weight){
        // connecting two vertices of a graph
        g1[source][destination]=weight;
        g1[destination][source]=weight;// since the graph is undirected

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

    bool findLink(int x,int y){
    return g1[x][y]!=0;
}
};


int main(){
    graph ob1(5);
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            cout<<"Do you want to connect "<<i<<" & "<<j<<" ? "<<endl<<"enter the weight";
            int weight;
            cin>>weight;
            ob1.addWeight(i,j,weight);
         
            
        }
    }
cout<<endl;
    ob1.printGraph();

     bool link=ob1.findLink(2,3);
    if(link==true){
        cout<<"link exists between 2 & 3"<<endl;
    }
    else{
        cout<<"link doesn't exist"<<endl;
    }
    

}