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
node* midPoint(node* head){
	node* slow = head;
	node* fast = head;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
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
	node* mid = midPoint(head);
	cout << mid->data;
}