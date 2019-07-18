
// HEAP

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void max_heapify(vector<int> &a,int i,int n){
	

	int tmp = a[i];
	int j = 2*i; // assign j to left node

	while(j <= n){
		if(j < n and a[j+1]>=a[i]){
			j = j + 1;
		}
		if(tmp > a[j]){  // if already max
			break;
		}
		else if(tmp <= a[j]){
			a[j/2] = a[j];
			j = 2 * j;
		}
		
	}
	a[j/2]  = tmp;
	return ;
	
} // end of function

void min_heapify(vector<int> &a,int i,int n){
	

	int tmp = a[i];
	int j = 2*i; // assign j to left node

	while(j <= n){
		if(j < n and a[j+1] <= a[i]){
			j = j + 1;
		}
		if(tmp < a[j]){  // if already max
			break;
		}
		else if(tmp >= a[j]){
			a[j/2] = a[j];
			j = 2 * j;
		}
		
	}
	a[j/2]  = tmp;
	return ;
	
} // end of function min_heapify


		


void max_heap(vector<int> &a,int n){
	//int n = a.size()-1;
	for(int i = n/2 ;i>=1; i--){
		max_heapify(a,i,n);
	}
		
}

void min_heap(vector<int> &a,int n){
	for(int i=n/2; i>=1; i--){
		min_heapify(a,i,n);
	}
}


int main(){
	int n;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	
	max_heap(a,n);
	min_heap(a,n);
	
	cout<<"after operations"<<endl;
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	
	
}
