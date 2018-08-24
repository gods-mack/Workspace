#include<iostream>
using namespace std;
struct node
{ int data;
  node *next;
 };
node *h;
class list
{  node *t;
 public:
  list() { t=NULL; h=NULL; }
 void add(int);
  void add_front(int);
  void add_back(int);
  void add_after(int,int);
  void del_front();
  int reverse(node*);
   void print();
};

void list::add(int x)
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
} 
 
void list::add_front(int x)
 {
    node *n=new node;
  n->data=x;
  n->next=h;
   h=n;
 } 
void list::add_back(int x)
 { 
   node *n=new node;
    n->data=x;
  t->next=n;
  t=n;
   }
void list::add_after(int srch,int item)
{ node *tmp; tmp=h;
  while(tmp!=NULL)
   { 
          if(tmp->data==srch)
           { node *n=new node;
              n->data=item;
             
               n->next=tmp->next;

               tmp->next=n;
             }
 tmp=tmp->next;
 }
}
void list::del_front()
{ 
     node *tmp;
     tmp=h;
    h=h->next;
      delete tmp;
 }
int  list::reverse(struct node *p)
{ 

  if(p->next==NULL)
  {  h=p;
      return p->data;
   }
     reverse(p->next);
   struct node *q=p->next;
   q->next=p;
  p->next=NULL;
  }



//Do something 


void list::print()
 {
    node *tmp=new node;
   tmp=h;
  while(tmp!=NULL)
  { cout<<tmp->data<< " ";
    tmp=tmp->next;
   }
}

int main()
{
  list a;
a.add(4);
a.add(45);
a.add(7);
a.add_front(73);
a.add_back(67);
a.add(3);
a.add_back(56);
a.add(26736);
//a.add_after(56,100);
//a.del_front();
a.reverse(h);
a.print();


}














