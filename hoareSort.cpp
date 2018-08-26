#include<iostream>
using namespace std;

int hoarePartition(int a[],int p,int r)
{
  int x=a[p];
  int i=p-1;
  int j=r+1;
while(1)
{
  do
  {
    j--;
  }
  while(a[j]>x);
  
  do
  {
    i++;
  }
  while(a[i]<x);
  if(i<j)
  {
    int tmp;
    tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
  }
  else
    {return j;
    }
}

return i+1;
  }

void quickSort(int a[],int p,int r)
{ int q;
 if(p<r)
 { 
    q=hoarePartition(a,p,r);
     quickSort(a,p,q);
     quickSort(a,q+1,r);
 
}
}

int main()
{
  int size;
 cin>>size; int a[size];

 for(int m=0;m<size;m++)
  { cin>>a[m]; }
 //cout<<endl;
 
 quickSort(a,0,size-1);
 
 for(int z=0;z<size;z++)
 { cout<<a[z]<< " "; }

}





     
