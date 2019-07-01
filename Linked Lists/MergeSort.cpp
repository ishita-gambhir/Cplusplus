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
void makeList(node* &head){
	int element;
	cin >> element;
	while(element != -1){
		insertAtTail(head, element);
		cin >> element;
	}
}
node* middleNode(node* head){
	node* fast = head->next;
	node* slow = head;
	while(fast != NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
node* merge(node* head1, node* head2){
	if(head1 == NULL){
		return head2;
	}
	if(head2 == NULL){
		return head1;
	}
	node* new_head;
	if(head1->data <= head2->data){
		new_head = head1;
		new_head->next = merge(head1->next, head2);
	}
	else{
		new_head = head2;
		new_head->next = merge(head1, head2->next);
	}
	return new_head;
}
node* mergeSort(node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	node* mid = middleNode(head);
	node* head1 = head;
	node* head2 = mid->next;
	mid->next = NULL;
	head1 = mergeSort(head1);
	head2 = mergeSort(head2);
	node* merged_list = merge(head1, head2);
	return merged_list;
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
	makeList(head);
	head = mergeSort(head);
	printList(head);
	return 0;
}