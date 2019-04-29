#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{

  vector<int> v ={3,5,3,4,7};;
  vector<int> ::iterator r;
 int target=3;
int result=count(v.begin(),v.end(),target);
int t=3;
 r=find(v.begin(),v.end(),t);
cout<<*r<<endl;
//cout<<*v.end()<<endl;
printf("%d\n",*v.end());
if(r==v.end())
{ cout<<"NO"; cout<<*r;}
else
{ cout<<"YES";cout<<*r; }

cout<<result;
}
