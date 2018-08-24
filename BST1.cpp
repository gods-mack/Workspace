#include<iostream>
using namespace std;

struct node
{
  int data; 
  node *right;
  node *left;
};

class BST
{
  node *root;
 public:
   BST() { root=NULL; }
 node* crtnode(int data)
 { node* n=new node;
   n->data=data;
   n->right=NULL;
   n->left=NULL;
return n;
}
void insert( int data,node *tmp)
 { 
   if(root==NULL)
   { root=crtnode(data);
    }
   else if(data<(tmp->data))
  {  if(tmp->left!=NULL)
      {  insert(data,tmp->left);
        }
       else
           { tmp->left=crtnode(data);
            }
     }
  else if(data>(tmp->data))
   { 
       if(tmp->right!=NULL)
        { insert(data,tmp->right); }
        else
          { 
        tmp->right=crtnode(data); 
          }
    }
else

{
  if(data==tmp->data) { cout<<"This is already "; }
}
}

 void addleaf(int data)
 { insert(data,root); }
 
void printInOrder(node* tmp)
{  //cout<<"Inorder "<<endl;
       if(tmp==NULL) return; 
       
       printInOrder(tmp->left);
       cout<<tmp->data<<" ";
       printInOrder(tmp->right);
        

}
void print()
{  cout<<"Inorder "<<endl;
      printInOrder(root);
 }
void printInPost(node *tmp1)
{

 
if(tmp1==NULL) return;


printInPost(tmp1->left);
printInPost(tmp1->right);
cout<<tmp1->data<<" ";
}

void printInPre(node *tmp2)
{
 
 if(tmp2==NULL) return;
cout<<tmp2->data<<" ";
printInPre(tmp2->left);
printInPre(tmp2->right);
}

void printpost()

{  cout<<"\n PostOrder "<<endl;
printInPost(root);
}
void printpre()
{  cout<<"\n PreOrder "<<endl;
  printInPre(root);
} 

};




int main()
{ BST a;
a.addleaf(9);
a.addleaf(16);
a.addleaf(14);
a.addleaf(5);
a.addleaf(3);
a.addleaf(10);
a.addleaf(23);
a.addleaf(11);
a.addleaf(20);
a.addleaf(13);
a.addleaf(15);
a.addleaf(10);
a.addleaf(2);
a.addleaf(3);
a.addleaf(4);

a.print();
a.printpost();
a.printpre();

}

 












