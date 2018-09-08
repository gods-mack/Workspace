#include<iostream>
using namespace std;

struct node
{ int data;
  node *left; 
  node *right;
};

class BST
{
 node *root; 
 
 public:
  BST() { root=NULL; }
 node* createNode(int x)
  { node *n=new node;
    n->data=x; 
    n->left=NULL;
    n->right=NULL;
  
   return n;
   }
void add(int x)
{ insert(root,x); }
 void insert(node *tmp,int x)
 { 
   if(root==NULL)
      { root=createNode(x); }
   else if(x>tmp->data)
       
       { if(tmp->right!=NULL)
         { insert(tmp->right,x);  }
          else
         { tmp->right=createNode(x); }
       }
  
   else if(x<tmp->data)
    {  if(tmp->left!=NULL)
        { insert(tmp->left,x); }
       else
        { tmp->left=createNode(x); }
     }

   else
      {     if(x==tmp->data)
        { 
            cout<<"This DATA "<<x<< " is already added"<<endl;
        }
      }  
  }

 void preOrder()
 { cout<<"Pre Order "; Pre(root); }
 void postOrder()
 {  cout<<endl; cout<<"Post Order "; Post(root); }
 void inOrder()
 {  cout<<endl; cout<<"In Order ";  In(root); }
 void find(int x) 
 { search(root,x); }

 void Pre(node *tmp1)
 { 
  if(root!=NULL)
   {
     cout<<tmp1->data<<" "; 
    if(tmp1->left!=NULL) {
      Pre(tmp1->left); }
    if(tmp1->right!=NULL) {
      Pre(tmp1->right);  }
    }
  else {cout<<"tree is empty "<<endl;}
 }

 void Post(node *tmp)
 { 
   if(root!=NULL)
   { 
      if(tmp->left!=NULL)
       { Post(tmp->left); }
      if(tmp->right!=NULL)
       { Post(tmp->right); }
      cout<<tmp->data<<" ";
    }
   else { cout<<"tree is empty"<<endl; }
 } 

 void In(node *tmp)
 {
   
   if(root!=NULL) 
   { 
      if(tmp->left!=NULL)
       { In(tmp->left); }
       cout<<tmp->data<<" ";
      if(tmp->right)
       { In(tmp->right); }
   }
   else { cout<<"tree is empty"<<endl; }
  }
 
 void search(node *tmp,int x)
 {
   if(tmp->data==x) { cout<<x<< " !! FOUND !! :) "<<endl ; }
     if(tmp->data>x)
      { if(tmp->left!=NULL)
         { search(tmp->left,x); }
         else { cout<<x<<" **NOT FOUND** "; }
       }
      if(tmp->data<x)
       { if(tmp->right!=NULL)
          { search(tmp->right,x); }
         else { cout<<x<<" **NOT FOUND** "; }
       }
 }

    

};



int main()
{
 
 BST a;
 a.add(13);
a.add(12);
a.add(10);
a.add(16);
a.add(17);
a.add(15);
a.add(11);
a.add(9);

a.preOrder();
a.postOrder();
a.inOrder();
cout<<endl;

a.find(13);

}






