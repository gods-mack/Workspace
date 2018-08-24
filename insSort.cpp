#include<iostream>
using namespace std;

void insSort(int a[],int n)
{


 for(int i=0;i<n-1;i++)
 { int loc,tmp;
    if(a[i]>a[i+1])
     {  
         loc=i+1;
       
    for(int j=0;j<n-1;j++)
     { if((a[j]>a[loc])&&(a[j+1]<a[loc]))
        { tmp=a[j+1];
           a[j+1]=a[loc]; 
            a[loc]=tmp;
         }
      }
     }
   }

}

int main()
{
  int n;
  cin>>n;
 int a[n];
 for(int m=0;m<n;m++)
  { cin>>a[m]; }

 insSort(a,n);
 
cout<<endl;

for(int p=0;p<n;p++)
 { cout<<a[p]<<" ";
 }

}





 


 
