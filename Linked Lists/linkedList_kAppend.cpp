#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
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
void appendElement_tailToHead(node* &head){
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	insertAtHead(head, temp->data);
	deleteTail(head);
}
void print(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main(){
	node* head = NULL;
	int numOfNodes, appendedNodes, element;
	cin >> numOfNodes;
	for(int i = 0; i < numOfNodes; i++){
		cin >> element;
		insertAtTail(head, element);
	}
	cin >> appendedNodes;
	for(int i = 0; i < appendedNodes; i++){
		appendElement_tailToHead(head);
	}
	print(head);
	return 0;
}