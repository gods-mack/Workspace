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

void insert(int data,node* tmp)
{
  if(root==NULL)
 { node* n=new node;
   n->data=data; n->right=NULL; n->left=NULL;
  root=n;
}
else if(data<(tmp->data))
{ if(tmp->left!=NULL)
    { insert(data,tmp->left); }
  else { node *n=new node;
     n->data=data; n->right=NULL; n->left=NULL; 
 tmp->left=n; } 
}
else if(data>(tmp->data))
{
  if(tmp->right!=NULL)
   {  insert(data,tmp->right); }
   else { node  *n=new node;
         n->data=data; n->right; n->left; 
  tmp->right=n; }
}
else
{ if(data==tmp->data)
  { cout<<"Already inserted"<<endl; }
}
}


void addleaf(int data)
{ insert(data,root); }


void inorder(node *tmp1)
{ if(tmp1!=NULL)
  { inorder(tmp1->left);
   cout<<tmp1->data<< " ";
 inorder(tmp1->right);
}
}
void postodr(node *tmp)
 
{  if(tmp!=NULL)
  { if(tmp->left!=NULL)
     { postodr(tmp->left); }
     if(tmp->right!=NULL)
       { postodr(tmp->right); }
      cout<< tmp->data<< " ";
}
 else {cout<<"tree is empty"<<endl; }
}

void print()
{ inorder(root); }

void post()

{cout<<endl; postodr(root); }
void search(int data,node *tmp)
{ node *current=tmp; 
  if(data<(tmp->data))
  { if(tmp->left!=NULL)
     { if(tmp->data==data) { cout<<"Found "<<endl;}
        else { current=current->left;); }
      
     }
  }
if(data>(tmp->data))
{ if(tmp->right!=NULL)
   { if(tmp->data==data) {cout<<"found "<<endl; }
    else { search(data,tmp->right); }
   } 
}

}

void srch(int data)
{ search(data,root); }


};

int main()
{
  BST a;
a.addleaf(9);
a.addleaf(12);
a.addleaf(3);
a.addleaf(14);
a.addleaf(6);


a.srch(6);
a.print();
a.post();
//a.srch(14);

}













