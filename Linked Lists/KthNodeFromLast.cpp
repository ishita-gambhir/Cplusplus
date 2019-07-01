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
void InputLinkedList(node* &head){
	int element;
	cin >> element;
	while(element != -1){
		insertAtTail(head, element);
		cin >> element;
	}
}
node* KthNodeFromLast(node* head, int k){
	node* fast = head;
	node* slow = head;
	for(int i = 0; i < k; i++){
		fast = fast->next;
	}
	while(fast != NULL){
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}
int main(){
	node* head = NULL;
	InputLinkedList(head);
	int k;
	cin >> k;
	node* KthNode = KthNodeFromLast(head, k);
	cout << KthNode->data;
}