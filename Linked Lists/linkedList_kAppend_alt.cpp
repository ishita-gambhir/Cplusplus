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
	node* n = new node(data);
	node* tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	tail->next = n;
}
void appendElement_head2tail(node* &head, int numOfNodes, int appendedNodes){
	node* previous = NULL;
	node* newHead = head;
	for(int i = 1; i <= numOfNodes - appendedNodes; i++){
		previous = newHead;
		newHead = newHead->next;
	}
	previous->next = NULL;
	node* temp = newHead;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = head;
	head = newHead;
}
void print(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
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
	appendElement_head2tail(head, numOfNodes, appendedNodes);
	print(head);
	return 0;
}