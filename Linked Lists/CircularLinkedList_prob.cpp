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
void insertAtTail(node* &head, int data){
	if(head == NULL){
		head = new node(data);
		return;
	}
	node* tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	tail->next = new node(data);
}
void makeLinkedList(node* &head){
	int element;
	cin >> element;
	while(element != -1){
		insertAtTail(head, element);
		cin >> element;
	}
}
void breakCycle(node* head){
	node* i = head;
	while(i != NULL){
		node* j = head;
		node* previous = NULL;
		while(j != NULL){
			if(i == j){
				previous = j;
				j = j->next;
				continue;
			}
			if(i->data == j->data){
				previous->next = NULL;
				return;
			}
			previous = j;
			j = j->next;
		}
		i = i->next;
	}
}
void printLinkedList(node* head){
	node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main(){
	node* head = NULL;
	makeLinkedList(head);
	breakCycle(head);
	printLinkedList(head);
	return 0;
}