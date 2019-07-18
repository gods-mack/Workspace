#include<iostream>
using namespace std;

void heapfy(int a[],int n,int i)
{
        int smallest=i;
        int l=2*i+1;
        int r=2*i+2;
 
        if(l<n  && a[l]<a[smallest])
        {
            smallest=l;
        }
        if(r<n && a[r]<a[smallest])
        { 
            smallest=r;
         }


       if(smallest!=i)
       { 
           swap(a[i],a[smallest]);
           heapfy(a,n,smallest);
        }
}

void heapmin(int a[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    { 
        heapfy(a,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {   swap(a[0],a[i]);
        heapfy(a,i,0); 
    }

}




int main()
{   
    int n; cin>>n;int a[n];
    for(int i=0;i<n;i++)
        { cin>>a[i]; } 
    heapmin(a,n);
    cout<<"After Sorting"<<endl;
    for(int j=0;j<n;j++)
    { 
        cout<<a[j]<<" "; 
    }

}









