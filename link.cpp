#include<iostream>
using namespace std;

struct node
{int data;
  string name;
  node *next;
};

class list
{ node *h,*t;
 public:
   list()
   { h=NULL; t=NULL; }

  void add(int x,string str)
  { node *n= new node;
        n->data=x;
        n->name=str;
                if(h==NULL) {
            t=n;  h=n;     }
        else {  
          t->next=n;
           t=t->next ; }
  
}
void get()
{ int num;  string nme;
cout<<"Enter number"<<endl;
  cin>>num; cout<<"Enter name "<<endl;
  cin>>nme;
  add(num,nme);
}
  void sort()
  {
  int hold=h->data;
      while(h!=NULL)
        { 
             h=h->next;
          if(hold>(h->data))
           { h->data=hold;
              hold=h->data; 
           }
 }
} 
void  print()
 {  node *tmp; tmp=h;
    while(h!=NULL)
   {
       cout<<h->data<<" "<<h->name<<endl; 
        h=h->next; }
   }

};

 
 int main()
{ int i;
   list a,b,c;
   for(int i=0;i<5;i++)
  { a.get(); }
   /**  a.add(4);
     a.add(5);
     a.add(2);
     a.add(15);
  // a.sort();**/


  a.print();

}





