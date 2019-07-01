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
node* merge_iterative(node* head1, node* head2){
	node* new_head = NULL;
	if(head1-> data <= head2->data){
		new_head = head1;
		head1 = head1->next;
	}
	else{
		new_head = head2;
		head2 = head2->next;
	}
	node* tail = new_head;
	while(head1 != NULL && head2 != NULL){
		if(head1-> data <= head2->data){
			tail->next = head1;
			head1 = head1->next;
		}
		else{
			tail->next = head2;
			head2 = head2->next;
		}
		tail = tail->next;
	}
	if(head1 == NULL && head2 != NULL){
		tail->next = head2;
		head2 = head2->next;
		tail = tail->next;
	}
	else if(head2 == NULL && head1 != NULL){
		tail->next = head1;
		head1 = head1->next;
		tail = tail->next;
	}
	return new_head;
}
node* merge_recursive(node* head1, node* head2){
	if(head1 == NULL){
		return head2;
	}
	if(head2 == NULL){
		return head1;
	}
	node* new_head;
	if(head1->data <= head2->data){
		new_head = head1;
		new_head->next = merge_recursive(head1->next, head2);
	}
	else{
		new_head = head2;
		new_head->next = merge_recursive(head1, head2->next);
	}
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
	node* head1 = NULL;
	node* head2 = NULL;
	InputLinkedList(head1);
	InputLinkedList(head2);
	printList(head1);
	printList(head2);
	node* merged_head = merge_recursive(head1, head2);
	printList(merged_head);
	return 0;
}