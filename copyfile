#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
    int data;
     node* left;
      node* right;

};

class BST
{
   node *root;
   
 public:
BST() { root=NULL;
 }

node* crtnode(int data)
{
   node* n=new node;
   n->data=data;
   n->left=NULL;
   n->right=NULL;
return n;
}
void addleaf(int data)
{ insert(data,root);
 }
void insert(int data,node* tmp)
{
  if(root==NULL)
  { root=crtnode(data); }
 else if(data<(tmp->data))
 { if(tmp->left!=NULL)
    {  insert(data,tmp->left);
     }
  else
    {
         tmp->left=crtnode(data);
     }
 } 
 else if(data>(tmp->data))
  {  if(tmp->right!=NULL)
     { insert(data,tmp->right);
      }
       else
         { tmp->right=crtnode(data);
           }
 }
  else
  {  if(data==tmp->data)
      { 
            cout<<"This DATA "<<data<< " already added"<<endl;
       }
   }


}
 
void printInOrder(node* tmp)
{ if(root!=NULL)
 {
  if(tmp->left!=NULL)
  {  printInOrder(tmp->left);
  } 
   cout<<tmp->data<<" "; 
 if(tmp->right!=NULL)
  { 
           printInOrder(tmp->right);
  }
 // cout<<(tmp->right)->data<<" ";
 }
 else
 { cout<<"Tree is empty "<<endl;
 }
}
void printPostOrder(node *tmp)
{if(root!=NULL)
  {
      if(tmp->left!=NULL)
       { printPostOrder(tmp->left); }
        if(tmp->right!=NULL)
       { printPostOrder(tmp->right); }
      cout<<tmp->data<<" ";
   }
  else { cout<<"Tree is empti"<<endl; }
}
void printPretOrder(node *tmp)
{ if(root!=NULL)
  {
   cout<<tmp->data<<" ";
    if(tmp->left!=NULL)
     { printPretOrder(tmp->left); }
    if(tmp->right!=NULL)
    { printPretOrder(tmp->right); }
  }
  else {cout<<"tree is empty "<<endl; }
}
void printIN()
{
      printInOrder(root);
 }
void printPO()
{printPostOrder(root); }
void printPR()
{ printPretOrder(root); }

void remove(int elem)      //delete Node
{  deleteN(root,elem); }
void deleteN(node *tmp,int elem)
{ node *prv;
 if(tmp==root)
{  }
else {
 if(tmp->data<elem)
{ deleteN(tmp->right,elem); }
if(tmp->data>elem)
{ deleteN(tmp->left,elem); }

if(tmp->data==elem)
{
 node *crnt=tmp;
  if((prv->right)->data==elem)
{ 
prv->right=crnt->right;
(prv->right)->left=crnt->left;
delete tmp;

}
if((prv->left)->data==elem)
{
prv->left=crnt->right;
(prv->left)->left=crnt->left;
delete tmp;
}
}
else
{ 
 prv=tmp;
}
}  
  }//end delete Node

};



int main()
{
 BST a;
a.addleaf(34);
a.addleaf(12);
a.addleaf(45);
a.addleaf(67);
a.addleaf(19);

a.remove(45);

a.printIN();
cout<<endl;
a.printPR();
cout<<endl;
a.printPO();


}
 

















      
