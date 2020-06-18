

#include<bits/stdc++.h>
using namespace std;

struct node {
	char data;
	node *children[26];
	int wc;

};

struct node *getNode() {
		node *n = new node;
		n->wc = 0;
		for(int i=0; i<26; i++) {
			n->children[i] = NULL;
		}
		return n;

}	


void insert(node *root, string s) {


	node *tmp  = root;


	for(int i = 0; i < (int)s.length(); i++) {
		int ind = s[i] - 'a';
		if(!tmp->children[ind]){
			tmp->children[ind] = getNode();
			tmp->children[ind]->data = s[i];
		}
		tmp = tmp->children[ind];
	}
	tmp->wc = 1;

		
}

bool search(node *root, string s) {

	node *tmp = root;
	for(int i=0; i<(int)s.length(); i++) {

		int ind = s[i] - 'a';
		tmp = tmp->children[ind];	
		if(tmp->data != s[i]) {
			return false;
		}
			
	}
	return (tmp!=NULL && tmp->wc == 1);
}

int main() {

	node *root = nullptr;
	root = getNode();

	int n; cin>>n;
	for(int i =0; i < n; i++) {
		string s;
		cin>>s;
		
		insert(root,s);
	}

	if(search(root,"manish")){
		cout<<"found..";
	}
	else{
		cout<<"no found..";
	}

}