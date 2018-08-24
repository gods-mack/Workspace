#include<iostream>
using namespace std;

struct node
{ int data;
  node *next;
};

class queue
{ node *rear,*front;

public:
 queue() { rear=front=NULL; }
 
void push(int x)  //enque queue
{
    node *n=new node;
  n->data=x;
  if(rear==NULL) { front=rear=n;} 
  else 
   {  rear->next=n;
         rear=n; }

}

void pop()  //deque queue
{
  node *tmp;
 tmp=front;
  cout<<"poped "<<tmp->data<<endl;
  front=front->next;
delete tmp;
}

void print()
{
      node *tmp;
     tmp=front;
 while(tmp!=NULL)
  { cout<<tmp->data<<" "; 
  tmp=tmp->next; }
delete tmp;
}

};

int main()
{ 
  queue a;
 a.push(3);
a.push(34);
a.push(65);
a.push(87);
a.push(186);
a.pop();
a.pop();
a.print();

}









   














