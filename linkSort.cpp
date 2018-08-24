#include<iostream>
using namespace std;

struct node
{
 int data;
 node *next;
};
int size=0;
class list
{  node *t,*h;
 public:
  list() { t=NULL; h=NULL; }
 void add(int x)
 {
      node *n=new node;
        n->data=x;
   
      if(h==NULL)
         { h=n; t=n; }
      else
       {  
        t->next=n;
        t= n;
          }
 size++; 
}

void sort(node *tmp)
{
 
  while(tmp->next!=NULL)
  { 
  if((tmp->data)>(tmp->next)->data) 
   { int hold=tmp->data;
     tmp->data=(tmp->next)->data;
     (tmp->next)->data=hold;
   }
  tmp=tmp->next;
   }
}

void Bsort()
{ for(int i=1;i<size;i++)
   {  sort(h); }
}

void print()
 {
    node *tmp1=new node;
   tmp1=h;
  while(tmp1!=NULL)
  { cout<<tmp1->data<< " ";
    tmp1=tmp1->next;
   }
}

};

int main()
{
  list a;
a.add(34);
a.add(76);
a.add(1);
a.add(87);
a.add(100);
a.add(12);
a.add(90);
a.add(10093839);


a.Bsort();

a.print();

}












































