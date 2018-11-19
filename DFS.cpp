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
stack<int> stak;
bool *flag= new bool[V]; 
 
 void edge(int u,int v);
 void printGraph();
 void print();
 void DFS(int s);
 bool allVisited(int s);
 void DFSutil(int s);

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

bool graph::allVisited(int s)
{  int count=0;
   int size=adj[s].size();
   for(int i=0;i<adj[s].size();i++)
   { 
      if(flag[adj[s][i]]==false) {
      count++;  }
    }
  cout<<"source  "<<s<<" Size  "<<size<<" count "<<count;
  if(count>0)
  { cout<<" false "<<endl; return false; } 
  else
  { cout<<" true "<<endl;  return true; }
}
   
    

void graph::DFS(int s)
{ 
 cout<<" Depth First Traversal  of Graph "<<endl;
  
    for(int i = 0; i < V; i++)
       {  flag[i] = false;  } 
   
   
   stak.push(s);
   flag[s]=true;
   cout<<s<<" ";
  DFSutil(s);
   
}

void graph::DFSutil(int s)
{
  while(!stak.empty())
  {
    	for(int i=0;i<adj[s].size();i++)
        { 
            if(flag[adj[s][i]]==false)
             { cout<<adj[s][i]<<" ";
               flag[adj[s][i]]=true;
	       stak.push(adj[s][i]);
               s=adj[s][i];
             } 
            if(allVisited(s))
             {  int hold=stak.top();
                 stak.pop();
                DFSutil(hold);
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
    g.edge( 4, 5);
    g.edge( 5, 6);
   
    g.printGraph(); 
   cout<<endl;
  g.DFS(1);
 // cout<<a[1][2];

//g.print();
}









