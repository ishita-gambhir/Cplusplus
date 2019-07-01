//later
#include<iostream>
using namespace std;
template<typename T>
class node{
public:
	T data;
	node* next;
	node* previous;
	node(T d){
		data = d;
		next = NULL;
		previous = NULL;
	}
	void push(node* &head, T Data){
		if(head == NULL){
			head = new node(Data);
			return;
		}
		node* n = new node(Data);
		n->next = head;
		head->previous = n;
		head = n;
	}
};
int main(){
	node<int>* head = NULL;
	//node<int> list1;
	//list1.push(head, )
	return 0;
}