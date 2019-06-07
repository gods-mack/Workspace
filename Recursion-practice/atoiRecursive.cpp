// Recursive c++ program to compute atoi() 

#include <cstdio> 
#include <cstring>
 


int atoiRecursive(char *str, int n) 
{ 
	// Base case (Only one digit) 
	if (n == 1) 
		return *str - '0'; 

	
	return (10 * atoiRecursive(str, n - 1) + str[n-1] - '0'); 
} 


int main(void) 
{ 
	char str[] = "12345"; 
	int n = strlen(str); 
	printf("%d", atoiRecursive(str, n)); 
	return 0; 
} 
