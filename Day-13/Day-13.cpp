/****
    Code Challenge
Day - 13
BFS and DFS.
****/

/**** Breadth first search ****/
/*
#include<bits/stdc++.h>
using namespace std;

class BFS{
private:
  int V;
  vector<list<int>> adj;
public:

  BFS(int V){
      this -> V = V;
      adj.resize(V);
  }
  
  void createGraph(int v, int w){
      adj[v].push_back(w);
  }
  
  void traversal(int start){
      vector<bool> visited;
      visited.resize(V, false);
      
      list<int> queue;
      
      visited[start] = true;
      queue.push_back(start);
      
      while (!queue.empty())
      {
          start = queue.front();
          cout<<"\t"<<start<<" ";
          queue.pop_front();
          
          for (auto adjacent: adj[start])
          {
              if (!visited[adjacent]){
                  visited[adjacent] = true;
                  queue.push_back(adjacent);
              }
          }
      }
      
  }
};

int main(){
    BFS bfs(7);
    bfs.createGraph(0, 1);
    bfs.createGraph(0, 3);
    bfs.createGraph(0, 5);
    bfs.createGraph(1, 2);
    bfs.createGraph(2, 6);
    bfs.createGraph(6, 4);
    bfs.createGraph(4, 1);
    bfs.createGraph(4, 5);
    bfs.createGraph(3, 5);
    cout<<"Breadth first search order with starting node as 0: "<<endl; 
    bfs.traversal(0);
    return 0;
}
*/


/*** Depth first search ***/ 
/*
#include<bits/stdc++.h>
using namespace std;

class DFS{
private:
  int V;
  vector<list<int>> adj;
public:

  DFS(int V){
      this -> V = V;
      adj.resize(V);
  }
  
  void createGraph(int v, int w){
      adj[v].push_back(w);
  }
  
  void traversal(int start){
      vector<bool> visited;
      visited.resize(V, false);
      
      list<int> stack;
      
      visited[start] = true;
      stack.push_back(start);
      
      while (!stack.empty())
      {
          start = stack.back();
          cout<<"\t";
          cout<<start<<" ";
          stack.pop_back();
          
          for (auto adjacent: adj[start])
          {
              if (!visited[adjacent]){
                  visited[adjacent] = true;
                  stack.push_back(adjacent);
              }
          }
      }
      
  }
};

int main(){
    DFS dfs(7);
    dfs.createGraph(0, 1);
    dfs.createGraph(0, 3);
    dfs.createGraph(0, 5);
    dfs.createGraph(1, 2);
    dfs.createGraph(2, 6);
    dfs.createGraph(6, 4);
    dfs.createGraph(4, 1);
    dfs.createGraph(4, 5);
    dfs.createGraph(3, 5);
    
    cout<<"Depth first search order with starting node as 0: "<<endl; 
    
    dfs.traversal(0);
    return 0;
}
*/