#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* previous;
	node* next;
	node(int d){
		data = d;
		previous = NULL;
		next = NULL;
	}
};
void insertAtTail(node* &head, int data){
	if(head == NULL){
		head = new node(data);
		return;
	}
	node* tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	node* n = new node(data);
	tail->next = n;
	n->previous = tail;
}
void makeList(node* &head, int numOfElements){
	int element;
	for(int i = 0; i < numOfElements; i++){
		cin >> element;
		insertAtTail(head, element);
	}
}
void insertSort(node* &head){
	if(head == NULL){
		return;
	}
	node* i = head->next;
	while(i != NULL){
		node* j = i->previous;
		node* iNEXT = i->next;
		//node *jPREV = j->prev;
		while(j != NULL && j->data > i->data){
			i->previous = j->previous;
			j->next = i->next;
			i->next = j;
			j->previous = i;
			if(j->next != NULL)
				j->next->previous = j;
			if(i->previous != NULL){
				i->previous->next = i;
			}
			if(j == head){
				head = i;
			}
			j = i->previous;
		}
		i = iNEXT;
	}
}
void printList(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
void makeListAuto(node* &head){
	for(int i = 4; i > 0; i--){
		insertAtTail(head, i);
	}
}
int main(){
	node* head = NULL;
	int n;
	cin >> n;
	makeList(head, n);
	//printList(head);
	insertSort(head);
	printList(head);
	return 0;
}