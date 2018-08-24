#include<iostream>
using namespace std;
class stack
{ int top; int size;  int *elements;
   public:
      stack(int n) {  
            elements=new int[n];
                  size=n;
             top=-1; }
      void add(int x)
      {  
            top++;
           elements[top]=x;
             }
void pop()
{
   int tmp;
   tmp=elements[top];
    top--; cout<<tmp;
}
int pop_top()
{ return elements[top];
 }

};
int main()
{ stack a(5);
   
 a.add(32);
a.add(76);
a.add(36);
a.add(736);
a.pop();
cout<<endl;
a.pop();
//a.add(199);
//cout<<a.pop();
//cout<<a.pop()<<endl;
//cout<<a.pop()<<endl;
}








 	







