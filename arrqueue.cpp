#include<iostream>
#define max 100
using namespace std;

class queue
{ int front=-1,rear=-1; int a[max];
  public:
 queue() { rear=0; front=0; }
   
void push(int x)
{ 
  a[rear]=x;
  rear++;
  }


int pop()
{ int x = a[front];
 front++;
return x;
}

void print()
{
  for(int i=front;i<rear;i++)
  {  cout<<a[i]<<" "; }
}

};

int main()
{
  queue a;
a.push(3);
a.push(32);
a.push(23);
a.push(46);
a.push(40);
cout<<"poped "<<a.pop()<<endl;
a.print();
}
















   
