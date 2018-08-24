#include<iostream>
using namespace std;

struct node
{ int data;
  node* next;
};

class list
{  node *h,*t;
public:
 list() { h=NULL; t=NULL; }

 
void add(int x)
{  node* n=new node;
n->data=x;
n->next=NULL;
 if(h==NULL)
 {  t=n; h=n; }
 else
 {
     t->next=n;
     t=n;
  }
}     
void print()
{  node *tmp; tmp=h;
  while(tmp!=NULL)
  {
       cout<<tmp->data<<" ";
      tmp=tmp->next;
   }
}

};


int main()
{
    list a;
a.add(3);
a.add(43);
a.add(76);
a.add(87);
a.print();


}





  
