#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	//constructor
	node(int d){
		next = NULL;
		data = d;
	}
};
int lenList(node* head){
	int count = 0;
	while(head != NULL){
		head = head->next;
		count++;
	}
	return count;
}
void insertAtHead(node* &head, int data){
	node* n = new node(data);
	n->next = head;
	head = n;
}
void insertAtTail(node* &head, int data){
	if(head == NULL){
		insertAtHead(head, data);
		return;
	}
	node* tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	node* n = new node(data);
	tail->next = n;
}
void insertInMiddle(node* &head, int data, int position){
	if(head == NULL || position == 0){
		insertAtHead(head, data);
	}
	else if(position > lenList(head)){
		insertAtTail(head, data);
	}
	else{
		node* previous = head;
		for(int i = 1; i < position; i++){
			previous = previous->next;
		}
		node* n = new node(data);
		n->next = previous->next;
		previous->next = n;
	}
}
void deleteHead(node* &head){
	if(head == NULL){
		return;
	}
	node* temp = head;
	head = head->next;
	delete temp;
}
void deleteTail(node* &head){
	if(head == NULL){
		return;
	}
	if(head->next == NULL){
		deleteHead(head);
		return;
	}
	node* tail = head;
	node* previous = NULL;
	while(tail->next != NULL){
		previous = tail;
		tail = tail->next;
	}
	previous->next = NULL;
	delete tail;
}
void deleteFromMiddle(node* &head, int position){
	if(head == NULL || position == 0){
		return;
	}
	if(position > lenList(head)){
		deleteTail(head);
		return;
	}
	if(position == 1){
		deleteHead(head);
		return;
	}
	node* previous = NULL;
	node* temp = head;
	for(int i = 1; i < position; i++){
		previous = temp;
		temp = temp ->next;
	}
	previous->next = temp->next;
	delete temp;
}
bool searchRecursive(node* head, int key){
	if(head == NULL){
		return false;
	}
	if(head->data == key){
		return true;
	}
	return searchRecursive(head->next, key);
}
bool searchIterative(node* head, int key){
	while(head != NULL){
		if(head->data == key)
			return true;
		head = head->next;
	}
	return false;
}
void print(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main(){
	node *head = NULL;
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	insertAtTail(head, 3);
	insertAtTail(head, 5);
	insertInMiddle(head, 4, 3);
	print(head);
	deleteHead(head);
	print(head);
	deleteTail(head);
	print(head);
	deleteFromMiddle(head, 2);
	print(head);
	return 0;
}