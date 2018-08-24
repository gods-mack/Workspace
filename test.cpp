#include<iostream>
using namespace std;

struct node
{int data;
 node *next;
};

class list
{
  node *head,*tail;
public:
 list() { head=NULL; tail=NULL; }

void add(int x)
{
  node *n=new node;
 n->data=x;
 
 if(head==NULL)
 { 
       head=tail=n; }
 else
   { 
    n->next=NULL;
    tail->next=n;
     tail=n;

}

}

void reverse()
{ 
    node *p,*n,*c;
   c=head;
    p=NULL;
    while(c!=NULL)
   { n=c->next;
     c->next=p;
     p=c;
      c=n;
      }
  head=p;
 }

void print()
{ 
      node *tmp;
  tmp=head;
 while(tmp!=NULL)
 {cout<<tmp->data<<" "; tmp=tmp->next; }
}




};

int main()
{
  list a;
a.add(43);
a.add(76);
a.add(34);
a.add(72);
a.add(87);

a.reverse();
a.print();
}



























      
