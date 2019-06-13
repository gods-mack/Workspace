
#include<bits/stdc++.h>

using namespace std;

template<typename Tcontainer>

void  bubbleSort(Tcontainer begin ,Tcontainer end){
	Tcontainer i,j;
	for ( i = begin; i != end; i++) {
		
		for ( j = begin; j != i; j++) {
			
			if (*i < *j) {
				std::swap(*i, *j); // Swap elements. swap is built in func
			}
		}
	}
	
}
	



int main(){
	vector<int> vec;
	list<int> lis;
	
	//insert in vector
	vec.push_back(22);
	vec.push_back(3);
	vec.push_back(6);
	vec.push_back(34);
	vec.push_back(9);
	// insert in map
	lis.push_back(34);
	lis.push_back(2);
	lis.push_back(12);
	lis.push_back(39);
	lis.push_back(17);
	
	bubbleSort(vec.begin(),vec.end());  // sort vector
	bubbleSort(lis.begin(),lis.end());    // sort map
	
	cout<<"Sorted vector "<<endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end();it++) {
		cout << *it<<" ";
	}
	cout<<"\nSorted List "<<endl;
	for(list<int> ::iterator it = lis.begin();it != lis.end(); it++){
		cout<<*it<<" ";
	}
	
}
	
	
