
// 

// prime factorization of a number in O( sqrt(n) )

#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n){

	printf("1");
	for(int i = 2; i*i<=n; i++){
		if(n%i == 0){
			while(n%i == 0){
			//	cout<<" x "<<i;
				printf(" x %d",i);
				n = n/i;
			}
		}
	}
	if(n > 2){
	//	cout<<" x "<<n;
		printf(" x %d",n);
	}
}

int main(){
	int n;
	scanf("%d",&n)
		primeFactor(n);

}
