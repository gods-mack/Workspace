#include<iostream>
using namespace std;

struct node
{ int data;
   node *next;
 };

class stack
{  node *top;
   node *h;
  public: stack() { top=NULL; }
  
    void push(int x)
    {  node *n=new node;
          n->data = x;
              n->next=top;
                  top=n;
      }
void print()
 {
    node *tmp;
   tmp=top;
   while(tmp!=NULL) {  
     cout<<tmp->data<<" ";
      tmp=tmp->next;
    }
}
 void pop()
{ 
   node *tmp;
   tmp=top; top=top->next;
   cout<<tmp->data<<" ";
  //  tmp=tmp->nextdelete ==========;
  delete tmp;
}


};

int main()
{ stack a;
      a.push(34);
a.push(87);
a.push(456);
a.push(36546);
a.pop();
a.pop();
a.pop();
cout<<endl;
a.print();

}














