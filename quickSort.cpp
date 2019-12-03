

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void exchange(int *a, int *b){
	int tmp  = *a;
	*a = *b;
	*b = tmp;
}

int quick_partitionRight(vector<int> &a, int l , int r){
	int pivot  = a[r];
	int i = l- 1;

	for(int j = l; j < r; j++){
		if(a[j] <= pivot){
			i++;
			exchange(&a[i], &a[j]);
		}
	}
	exchange(&a[i+1], &a[r]);

	return i +1;
}

int randomized_partition(vector<int> &a , int l , int r){
	int i = (rand() % r) + l;
	exchange(&a[i],&a[r]);
	return quick_partitionRight(a,l,r);
}

int quick_partitionLeft(vector<int> &a, int l , int r){
	int pivot  = a[l];
	int i = l +1;

	for(int j = l+1 ; j <= r; j++){
		if(a[j] <= pivot){
			if(i != l +1){
				exchange(&a[i],&a[j]);
			}
			i++;
		}
	}
	exchange(&a[i-1],&a[l]);

	return i-1;
}

void quickSort(vector<int> &a, int l, int r, char choice){
	if(l < r){
		int q;
		if(choice == 'L'){ // left pivot
			 q = quick_partitionLeft(a,l,r);
		}
		if(choice == 'H'){ // right pivot
			 q = quick_partitionRight(a,l,r);
		} 
		if(choice == 'R'){  // randomized pivot
			 q = randomized_partition(a,l,r);
		}
		
		quickSort(a,l,q-1,choice);
		quickSort(a,q+1,r,choice);
	}
}

int main(){
	int n;
	cin>>n;
	cout<<"Enter pivot choice:\n";	
	char choice;
	cin>>choice;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	quickSort(a,0, n-1,choice);
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}

}