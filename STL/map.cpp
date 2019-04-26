#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<int,int> m;
 map<int,int> :: iterator itr;

m.insert(make_pair(4,3));
m.insert(make_pair(3,5));
m.insert(make_pair(4,6));
m.insert(make_pair(5,56));

for(itr=m.begin();itr!=m.end();itr++)
{ cout<<" "<<itr->first<<" " <<itr->second;
}

} 
