#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//DFS method not for disconnected graph **
void dfsprint(vector<vector<int> > v, int sv, vector<bool> &visited){
//sv-> starting vertex from where graph should print
    cout<<sv<<endl;
    visited[sv] = true;
    int n = v.size();
    for(int i=0;i<n;i++){
        //if there is edge between sv and another node..also that sv not visited print the edge between the sv and i.
        if(v[sv][i] == 1 && visited[i]==false){
            dfsprint(v,i, visited);
        }
    }
}
//BFS method not for disconnected graph **
void bfsprint(vector<vector<int> >v, int sv, vector<bool> visited){
    int n = v.size();
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    while(!q.empty()){
        int cv = q.front();
        q.pop();
        cout<<cv<<endl;
        for(int i = 0; i< v.size();i++){
            if(v[cv][i] == 1 && visited[i] != true){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
//DFS for disconnected graph
void DFS(vector<vector<int> > matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){ //To check if any unvisited node doesn't left
        if(!visited[i]){
            dfsprint(matrix,i,visited);
        }
    }

}
//BFS for disconnected graph
void BFS(vector<vector<int>> matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            bfsprint(matrix,i,visited);
        }
    }
}

int main(){
   int n,e;
   cin>>n>>e;// n = no. of nodes, e = no. of edges

   vector<vector<int> > matrix(n,vector<int>(n,0));//2D matrix of n X x with all values 0.

   for(int i=1;i<=e;i++){
    int fv,sv; //fv->  first vertex, sv-> second vertex 
    cin>>fv>>sv; // taking the value of intial and final node which need to be connected.
    matrix[fv][sv] = 1; // creating edge in adjency matrix.
    matrix[sv][fv] = 1;
   }
   vector<bool> visited(n,false);//intially no vertex is visited so all values are false
   cout<<"\nDFS print"<<endl;
   dfsprint(matrix,0,visited);
    cout<<"\nBFS print"<<endl;
   bfsprint(matrix,0,visited);
   return 0;
}
