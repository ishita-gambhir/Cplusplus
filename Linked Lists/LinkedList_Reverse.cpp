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
void InputLinkedList(node* &head, int numOfElements){
	int element;
	for(int i = 0; i < numOfElements; i++){
		cin >> element;
		insertAtTail(head, element);
	}
}
void reverse_iterative(node* &head){
	node* PREVIOUS = NULL;
	node* CURRENT = head;
	node* NEXT = CURRENT->next;
	while(NEXT != NULL){
		CURRENT->next = PREVIOUS;
		PREVIOUS = CURRENT;
		CURRENT = NEXT;
		NEXT = CURRENT->next;
	}
	CURRENT->next = PREVIOUS;
	head = CURRENT;
}
node* reverse_recursive(node* head){
	if(head->next == NULL || head == NULL){
		return head;
	}
	node* new_head = reverse_recursive(head->next);
	node* current = head;
	current->next->next = current;
	current->next = NULL;
	return new_head;
}
void printList(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main(){
	node* head = NULL;
	int numberOfElements;
	cin >> numberOfElements;
	InputLinkedList(head, numberOfElements);
	printList(head);
	reverse_iterative(head);
	printList(head);
	head = reverse_recursive(head);
	printList(head);
	return 0;
}