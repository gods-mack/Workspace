#include<iostream>

using namespace std;

template<typename T>

void printType(T x){
	cout<<typeid(x).name()<<" "<< x<<endl;
}

int main(){
	
	int a = 32;
	float b = 23.2;
	double c = 3.2122;
	
	// implicit way
	cout<<"Implicit way\n";
	printType(a);
	printType(b);
	printType(c);
	// explicitly 
	cout<<"explicit way\n";
	printType<int>(a);
	printType<float>(b);
	printType<double>(c);
}

