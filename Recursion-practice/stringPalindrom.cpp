// check a string is palindron or not, using recursion

#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;


bool isPalin(char str[],int start,int end){
	
	if(str[end]!=str[start]){
		return false;
	}
	else{
		if(end==start or end==start+1){
			return true;
		}
			
		isPalin(str,start+1,end-1);
	    
   }
}
	

int main(){
	char str[] = "malayalam";
	
	int end = strlen(str);
	
	if(isPalin(str,0,end-1)){
		cout<<"yes, its palindrom\n";
	}
	else{
		cout<<"No,its not palindrom\n";
	}
	
}
