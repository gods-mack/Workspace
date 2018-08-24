#include<iostream>
using namespace std;

struct node
{
   int data;
   node *prv;
   node *next;
};
class list
{
    node *t,*h;
public:
list() {  t=NULL; h=NULL;   }

void add(int x)
{
  node *n=new node;
n->data=x;
 if(h==NULL)
  {  t=h=n; }
else
{
   n->next=NULL;
 n->prv=t;
 t->next=n;
 t=n;
}

}
void add_front(int x)
{
   node *n=new node;
  n->prv=NULL;
   n->data=x;
   h->prv=n;
   n->next=h;
   h=n;
 }
void add_after(int after,int item)
{  node *tmp;
      tmp=h;
   //node *n= new node;
  while(tmp!=NULL)
  { 
        if(tmp->data==after)
          break;
         tmp=tmp->next; }
         if(tmp==NULL)
          { cout<<"item not present"<<endl; }
           else
            { node *n= new node;
                n->data=item;
               n->prv=tmp;
            
                 // cout<<tmp->data<<" "<<endl;
               n->next=tmp->next ;
               (tmp->next)->prv=n;
                // cout<<(tmp->next)->data<<" "<<endl;
               tmp->next=n;
                   // cout<<(tmp->next)->data<<" "<<endl;
                }
                 
}
              

void reverse()
{
  node *tmp;
  tmp=t;
 while(tmp!=NULL)
 {
     cout<<tmp->data<<" ";
   tmp=tmp->prv;
}

}
  void del_front()
  {
       node *tmp;
       tmp=h; h=h->next;
       (tmp->next)->prv=NULL;
       h=tmp->next;  delete tmp;
 }  
void print()
{
  node *tmp;
  tmp=h;
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
a.add(33);
a.add(24);
a.add(100);
a.add_front(1000);
a.add_front(1001);
a.add_front(1002);
a.add(999);
//a.add_after(1002,99899);
//a.add_after(100,100238);
a.add_after(33,111111);
a.del_front();
a.print(); cout<<endl;
a.reverse();
}





















