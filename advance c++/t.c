
#include<stdio.h>
#include<string.h>

void hello(int n){
	printf("hello world %d\n",n);
}

int main(){
	
	void (*ptr)(int) = &hello;
	// function time pointer 
	(*ptr)(10);
	
	return 0;

}