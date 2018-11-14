//**** IMPORTANT *****//
 
// Implementation of Graph using C++ STL 
//vector < int >v [n]

//It defines an array of vectors whose index value ranges from 0 till n-1

//It means v[0] , v[1] , …. v[n-1] all are vectors.

#include<bits/stdc++.h>
#include<iomanip>
#include<cstdio>

using namespace std;

void edge(vector<int> a[],int u,int v)
{


 a[u].push_back(v);
 a[v].push_back(u);

}

void printGraph(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 

void print(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
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
 

int main()
{
 
 int V=5;  //No of Vertcies
 vector<int> a[V];
    edge(a, 0, 1); 
    edge(a, 0, 4); 
    edge(a, 1, 2); 
    edge(a, 1, 3); 
    edge(a, 1, 4); 
    edge(a, 2, 3); 
    edge(a, 3, 4); 
    edge(a,4,2);
   
    printGraph(a, V); 
   cout<<endl;
 // cout<<a[1][2];

print(a,V);
}








