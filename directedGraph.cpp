#include<bits/stdc++.h>

#include<vector>
using namespace std;


void findOutdegree(int source, const vector< pair<int,int > > &edge)
{
 int count=0;
 for(int i=0;i<6;i++)
 {
   if(edge[i].first == source)
   { count++; }

 }
cout<<"\nOutDegree of this Source Vertex "<<count<<endl;

}



int main()
{
 vector< pair<int,int> > edge;

cout<<" Enter Paths "<<endl;
   //int arr[] = {10, 20, 5, 40 }; 
    //int arr1[] = {30, 60, 20, 50}; 

for(int i=0;i<6;i++)
{
 int a,b;
 cin>>a>>b;
 
 edge.push_back(make_pair(a,b));

}

cout<<" All Paths "<<endl;

for(int i=0;i<6;i++)
{
  cout<<edge[i].first<<" "<<edge[i].second<<endl;
}

findOutdegree(3,edge);  // function to find Ot=utdegree of any vertex

}



