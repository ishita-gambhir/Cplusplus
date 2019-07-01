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
void makeLinkedList(node* &head, int numOfElements){
	int element;
	for(int i = 0; i < numOfElements; i++){
		cin >> element;
		insertAtTail(head, element);
	}
}
int intersectionPoint(node* head1, node* head2){
    node* i = head1;
    node* j = head2;
	while(i != NULL){
        j = head2;
		while(j != NULL){
			if(i->data == j->data){
				return i->data;
			}
			j = j->next;
		}
		i = i->next;
	}
	return -1;
}
void print(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main(){
	node* head1 = NULL;
	node* head2 = NULL;
	int N1, N2;
	cin >> N1;
	makeLinkedList(head1, N1);
	cin >> N2;
	makeLinkedList(head2, N2);
    //print(head1);
    //print(head2);
	cout << intersectionPoint(head1, head2);
	return 0;
}