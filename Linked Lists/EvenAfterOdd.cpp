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
void evenAfterOdd(node* h_odd, node* h_even){
	node* temp = h_odd;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = h_even;
}
void print(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}
int main(){
	node* h_even = NULL;
	node* h_odd = NULL;
	int numberOfElements, element;
	cin >> numberOfElements;
	for(int i = 0; i < numberOfElements; i++){
		cin >> element;
		(element & 1) ? insertAtTail(h_odd, element) : insertAtTail (h_even, element);
	}
	evenAfterOdd(h_odd, h_even);
	print(h_odd);
	return 0;
}