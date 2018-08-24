#include<iostream>
using namespace std;

struct node
{
  int data; node *right,*left;
};

class BST
{ 
node *root;

public:
BST() { root=NULL; }

node* crtnode(int data)
{ node *n=new node;
n->data=data;
n->right=NULL;
n->left=NULL;
return n;
}
void insert(int data,node* tmp)
{
if(root==NULL)
{ root=crtnode(data); }
else if(data<tmp->data)
{ if(tmp->left!=NULL)
 { insert(data,tmp->left);
  }
  else { tmp->left=crtnode(data); }
}
else if(data>tmp->data)
{ if(tmp->right!=NULL)
   { insert(data,tmp->right); }
   else
   { tmp->right=crtnode(data); }
}
else
 { if(data==tmp->data)
    { cout<<"already inserted"<<endl; }
}

}

void addleaf(int data)
{ insert(data,root); }

void printInOrder(node* tmp)
{ if(tmp!=NULL)
 {
  
   printInOrder(tmp->left);
  
  cout<<tmp->data<<" "; 
       printInOrder(tmp->right);
  
 // cout<<tmp->data<<" "; 
 }
 }

void print()
{
     printInOrder(root);
 }

};

int main()
{ BST a;
a.addleaf(12);
a.addleaf(14);
a.addleaf(9);
a.addleaf(10);
a.addleaf(16);
a.addleaf(13);
a.addleaf(8);



a.print();



}































