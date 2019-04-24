//**** IMPORTANT *****//
 
// Implementation of Graph using C++ STL 
//vector < int >v [n]

//It defines an array of vectors whose index value ranges from 0 till n-1

//It means v[0] , v[1] , …. v[n-1] all are vectors.

#include<bits/stdc++.h>
#include<iomanip>
#include<cstdio>

using namespace std;

class graph {

public:
 
 //graph(int V); 
vector<int> adj[7];
int V=7;

 
 void edge(int u,int v);
 void printGraph();
 void print();
 void BFS(int s);

};

/*graph::graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} */
   
void graph::edge(int u,int v)
{


 adj[u].push_back(v);
 adj[v].push_back(u);

}

void graph::printGraph() 
{ 
    for (int v = 1; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 

void graph::print() 
{ 
    for (int v = 1; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (int x=0;x<adj[v].size();x++)
       { 
           cout << "-> " << adj[v][x]; 
        //printf("\n"); 
       }
      cout<<endl;
    } 
}  

void graph::BFS(int s)
{ 
 cout<<" Breadh First Traversal  of Graph "<<endl;
   bool *flag= new bool[V]; 
    for(int i = 0; i < V; i++) 
       {  flag[i] = false;  } 
   
   list<int> queue;
  
 flag[s]=true; 
 queue.push_back(s);
  
  //list<int> queue::iterator i;
 
 while(!queue.empty())
 { 
    s=queue.front(); 
    cout<<s<<" "; 
    queue.pop_front(); 
 
   for(int j=0;j<adj[s].size();j++)
   { 
     if(flag[adj[s][j]]==false) 
     {
      queue.push_back(adj[s][j]); 
      flag[adj[s][j]]=true;
     }
      
   }
 
   
  
   }

}



 
 

int main()
{
 
  //No of Vertcies
  graph g;
  //g(5);
    g.edge( 1, 2);  
    g.edge( 1, 3); 
    g.edge( 2, 4); 
    g.edge( 2, 5); 
    g.edge( 3, 5); 
    g.edge( 4, 6);
    g.edge( 5, 6);
   
    g.printGraph(); 
   cout<<endl;
  g.BFS(1);
 // cout<<a[1][2];

g.print();
}








