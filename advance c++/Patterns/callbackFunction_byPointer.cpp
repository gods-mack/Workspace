
// Implementing Callbacks using Function Pointers

/*
A call back function is used to notify the program execution that an event has taken place,
this is commonly use in GUI development. When a user clicks on a button a call back function will be
invoked to handle the users request. They can be used for other purposes though, suppose for example 
we wanted to write some code to fill an array and we wanted to be able to reuse
that code to fill lots of arrays with data types
from different functions. Consider the following example

*/


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

template<typename arrType,typename func>

void fillArray(arrType *arr, int size, func f){
	
	for(int i = 0;i<size; i++){
		arr[i] = f();
	}
	
}
int fillWithInts(){
	return rand();
}

template<typename arrType>
void printArray(arrType *arr,int size){   // int size == size_t
	
	for(int i = 0;i<size; i++){
		cout<<arr[i]<<" ";
	}
}

void nonTemplateFillArray(int *array, size_t arraySize,int(*getElement)(void)) {
	for (int i = 0; i < arraySize; i++) {
		array[i] = getElement();
	}

}
	

int main(){
	
	int array[10];
	fillArray(array,10,fillWithInts);
	
	printArray(array,10);
	
	int intArrayNoTemplate[10];
	nonTemplateFillArray(intArrayNoTemplate, 10, fillWithInts);
	cout << "\n\nUsing non templated array fill call back function. \n";
	printArray(intArrayNoTemplate, 10);
}
	
	
		
		
