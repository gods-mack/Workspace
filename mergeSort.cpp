#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int h)
{
int i,j,k;
int n1=m-l+1;
int n2=h-m;
int L[n1];
int R[n2];

for(int i=0;i<n1;i++)
{ L[i]=a[l+i]; }
for(int j=0;j<n2;j++)
{ R[j]=a[m+j+1];}

 i=0;j=0; k=l;

while(i<n1 && j<n2)
{
	if(L[i]<=R[j])
	{
		 a[k]=L[i];
		i++;
	}
	else
	{
		a[k]=R[j];
		j++;
	}
	k++;
}
//insert left element
while(i<n1)
{
	a[k++]=L[i];
i++;
}
while(j<n2)
{
	a[k++]=R[j];
j++;
}

}
 
void mergeSort(int a[],int l,int h)
{
	
	if(l<h)
	{ int m=(l+h)/2;
		mergeSort(a, l, m);
		mergeSort(a,m+1, h);
		merge(a, l, m,h);
	}
}

int main()
{
	 int n;
	 cin>>n; int a[n];
for(int t=0;t<n;t++)
{ cin>>a[t]; }
	 mergeSort(a,0,n-1);

	 for(int p=0;p<n;p++)
	 {
            cout<<a[p]<<" ";
	 }
}
