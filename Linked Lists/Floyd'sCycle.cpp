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
void deleteCycle(node* head){
	node* slow = head;
	node* fast = head;
	while(fast->next->next != NULL && fast != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			slow = head;
			break;
		}
	}
	while(slow != fast){
		slow = slow->next;
		fast = fast->next;
	}
	int cycle_start = slow->data;
	node* tail = head;
	while(tail->next->data != cycle_start){
		tail = tail->next;
	}
	tail->next = NULL;
	//return false;
}
int main(){
	node* head = NULL;
	makeLinkedList(head);
	deleteCycle(head);
	//cyclePresent ? cout << "yes" : cout << "no";
	return 0;
}