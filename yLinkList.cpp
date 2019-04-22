

#include<iostream>
using namespace std;

struct node{
	string city;
	 node *next;
 };
 
 class list
 {
	 public:
	 node *h1,*h2,*t1,*t2,*h3,*t3; int size1=0; int size2=0; int size3=0;
	  list() { h1=NULL; h2=NULL; t1=NULL; t2=NULL; h3=NULL; t3=NULL; }
	  
	  void insert1(string city)
 {  node *n1=new node();
    n1->city=city;
    if(h1==NULL) 
    { h1=n1;  t1=n1;} 
    else
    { t1->next=n1; 
       t1=n1;
    }size1++;
  }
  
  void insert2(string city)
 {  node *n=new node();
    n->city=city;
    if(h2==NULL) 
    { h2=n;  t2=n;} 
    else
    { t2->next=n; 
       t2=n;
    } size2++;
  }
  
   void insert3(string city)
 {  node *n=new node();
    n->city=city;
    if(h3==NULL) 
    { h3=n;  t3=n;} 
    else
    { t3->next=n; 
       t3=n;
    }size3++;
  }
  
   void print1()
 { 
   node *temp; 
   temp=h1;
  while(temp!=NULL) 
  { cout<<temp->city<< " "; 
    temp=temp->next;
  }
 }
 
  void print2()
 { 
   node *temp; 
   temp=h2;
  while(temp!=NULL) 
  { cout<<temp->city<< " "; 
    temp=temp->next;
  }
 }
 
 void print3()
 { 
   node *temp; 
   temp=h3;
  while(temp!=NULL) 
  { cout<<temp->city<< " "; 
    temp=temp->next;
  }
 }
  void connect()
  { t1->next=h3;
	 t2->next=h3;
 }
 
 void intersectionPoint()
 {    //cout<<size1<<" "<<size2;
	node *tmp1;tmp1=h1;
	node *tmp2;tmp2=h2;
	cout<<size1<<" "<<size2;
	for(int i=0;i<size1;i++)
   { 
	   
		   tmp1=tmp1->next;
	   }
	    for(int j=0;j<size2;j++)
	      { 
			   tmp2=tmp2->next;
		   }
	   cout<<" Intersection Point "<<tmp1->city;
	   
   }
		    
	  

};


int main()
{
	
	list a;
	 a.insert1("Chandigarh");
	 a.insert1("Ambala");
	 a.insert1("Karnal");
	 a.insert1("Panipat");
	 
	 a.insert2("Rewari");
	 a.insert2("Jhajjer");
	 a.insert2("Rohtak");
	 //a.insert2("Chandigarh");
	 
	 a.insert3("Delhi");
	 a.insert3("jaipur");
	 
	 a.connect();
	 
	 a.intersectionPoint();
	 
	 a.print1();
	 cout<<endl;
	 a.print2();
	 cout<<endl;
	 a.print3();
	 
	 
 }
	 
	 
	 
	 
	
	
	
	
	
	
	
	
 
 
 
 
 
 
  
  
  
  
  
  
  
  
  
  
  
  
