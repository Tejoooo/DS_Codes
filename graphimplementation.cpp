#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        map<int,vector<int>> Adjlist;
        //Here created a key for adding the particular edges for the key here the edges
        //that r connexted to the key r strored in the vector
        //Creating a function for adding edge btw to vertices/nodes here direction is used for
        //knowing whether the graph is directed or undirected
        void addEdge(int u,int v,bool direction){
            Adjlist[u].push_back(v);
            if(direction==0){
                Adjlist[v].push_back(u);
            }
        }

        void printAdjlist(){
            for(auto i: Adjlist){
                cout<<i.first;
                for(auto j: i.second){
                    cout<<j;
                }
                cout<<endl;
            }
        }
};


int main(){
    int ver,ed;
    cout<<"Enter number of vertices: "<<endl;
    cin>>ver;
    cout<<"Enter number of edges: "<<endl;
    cin>>ed;
    cout<<"Enter the vertices that are connected:"<<endl;
    int v1,v2;
    graph g;
    for(int i=0;i<ed;i++){
        cin>>v1>>v2;
        g.addEdge(v1,v2,0);
    }
    g.printAdjlist();
    
    return 0;
}