#include<iostream>
#include "message.h"

using namespace std;

int main(){
	message m;
	m.print_hello();
	cout<<m.greeting(45)<<endl;
	cout<<m.ramram("manish");
}