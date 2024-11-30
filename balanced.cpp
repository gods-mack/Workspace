/'Given an integer N which has odd number of digits, 
find whether the given number is a balanced or not.
An odd digit number is called a balanced number if the sum of all digits to the left 
of the middle digit and the sum of all digits to the right of the middle digit is equal. '/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	bool balancedNumber(string N)
	{
	    // code here
	    if(N.size() % 2 == 0){return false;}
	    int mid = N.size()/2;
	    int sum1 = 0,sum2 = 0;
	    for(int i=0;i<mid;i++){
	        sum1 += N[i]-'0';
	    }
	    for(int i=mid+1;i<N.size();i++){
	        sum2 += N[i]-'0';
	    }
	    if(sum1 == sum2){return true;}
	    else{return false;}
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}