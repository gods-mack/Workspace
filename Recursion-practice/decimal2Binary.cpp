// conversion of decimal NUmber to binary , using recurion

#include<iostream>

void makeBinary(int num){
	
	if(num>0){
		
		makeBinary(num/2);
		cout<<num%2<<"";
	}
		
		
	
}


int main(){
	int num;
	cin>>num;
	
	makeBinary(num);
}
	
	
