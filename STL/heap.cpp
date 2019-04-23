#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a={22,3,40,4,2};
	 
    // Converting vector into a heap
    // using make_heap() 
	make_heap(a.begin(),a.end());
	
	
	a.push_back(80);
	push_heap(a.begin(),a.end()); //reorder heap after push back in vector
	
	pop_heap(a.begin(),a.end());
	pop_heap(a.begin(),a.end());
	a.push_back(1990);
	push_heap(a.begin(),a.end());

   //pop_heap(a.begin(),a.end());
	
	
  cout<<endl<<a.front()<<endl;  
  
  
  for(int &x:a)
   { cout<<x<<" ";  }
   
  
   // Displaying the maximum element of heap
    // using front()


 
}
