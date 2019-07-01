#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	node* previous;
	node(int d){
		data = d;
		next = NULL;
		previous = NULL;
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
	n->previous = tail;
}
void makeList(node* &head, int numOfElements){
	int element;
	for(int i = 0; i < numOfElements; i++){
		cin >> element;
		insertAtTail(head, element);
	}
}
bool Palindrome(node* head){
	node* tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	while(head != tail){
		if(head->data != tail->data){
			return false;
		}
		head = head->next;
		tail = tail->previous;
	}
	return true;
}
int main(){
	node* head = NULL;
	int N;
	cin >> N;
	makeList(head, N);
	Palindrome(head) ? cout << "True\n" : cout << "False\n";
	return 0;
}