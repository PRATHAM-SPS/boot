#include<bits/stdc++.h>
using namespace std;

class Graph {
public:
 
 map<int, bool> visited;
 map<int, list<int>> adj;

void addedge(int v, int w);


void DFS(int v);

};

void Graph::addedge(int v, int w){
    adj[v].push_back(w);

};

void Graph::DFS(int v){
     visited[v] = true;
     cout<<v<<" ";

     list<int>::iterator i;
     for ( i = adj[v].begin(); i != adj[v].end();++i){
             if(!visited[*i]){
                DFS(*i);
             }
     }

};

int main(){

    Graph g;
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(3,3);
    g.addedge(0,1);
    g.addedge(0,2);

    cout<<"this is the result:   ";

    g.DFS(2);




}