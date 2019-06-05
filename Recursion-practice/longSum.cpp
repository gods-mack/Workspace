/* if x and y passed to some function
 calculate (1+2+3...(x-1)+x ) + y , using recursion
 
 Question : 
 The function fun() calculates and returns ((1 + 2 … + x-1 + x) +y) which is x(x+1)/2 + y.
 For example if x is 5 and y is 2, then fun should return 15 + 2 = 17.
 
 #include<iostream>
 using namespace std;
 
 */
 
 
int fun1(int x, int y)  
{ 
  if(x == 0) 
    return y; 
  else
    return fun1(x - 1,  x + y); 
} 


int main(){
  int x,y;
  cin>>x>>y;
  
  cout<<fun1(x,y);
}
 
 
