#include<iostream> 
using namespace std;

void sort_(int a[],int n)
{ int min_idex; int loc;

 for(int j=0;j<n-1;j++)
{ min_idex=j;
 for(int i=j+1;i<n;i++)
 { 
    if(a[min_idex]>a[i])
     { min_idex =i;   loc =i; }
 
  }

int tmp;
  tmp=a[min_idex];
  a[min_idex]=a[j];
  a[j]=tmp;
 

}

}

int main()
{
 int n;
 cin>>n;
int a[n];
 
for(int p=0;p<n;p++)
{ cin>>a[p]; }
sort_(a,n);
cout<<endl;
for(int u=0;u<n;u++)
{ cout<<a[u]<<" "; }

}
