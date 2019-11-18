
#include<bits/stdc++.h>
using namespace std;

template<class T>

struct node{
	
	T data;
	node<T> *next;
};

template<class T>
class LList{
public:
	node<T> *head;
	node<T> *tail;

	LList(){ head=nullptr; tail = nullptr;}
	//~LList();

	void insertList( T data);
	void printList(node<T> *tmp);
	void printL(){
		printList(head);
	}

};

template<class T>
void LList<T>::insertList( T data){
	node<T> *n = new node<T>;
	n->data = data;
	n->next = nullptr;
	
	if(head == nullptr){
		head  = n;
		tail = n;
	}
	else{
		tail->next =  n;
		tail = n;
	}
}

template<class T>
void LList<T>::printList(node<T> *tmp){

	while(tmp!=nullptr){
		cout<<tmp->data<<" ";
		tmp = tmp->next;
	}
}

int main(){
	int n; cin>>n;
	LList<string> ob;
	for(int i  = 0; i < n; i++){
		string x; cin>>x;
		ob.insertList(x);
	}
	ob.printL();
}