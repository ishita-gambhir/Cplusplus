/*
Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

You need not have to create a new list. Just reverse the old one using head.

Input Format:
The first line contains 2 space separated integers N and K

The next line contains N space separated integral elements of the list.

Constraints:
0 <= N <= 10^6 0 <= K <= 10^6

Output Format
Display the linkedlist after reversing every k elements

Sample Input
9 3
9 4 1 7 8 3 2 6 5
Sample Output
1 4 9 3 8 7 5 6 2
*/
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
void k_Reverse(node* &head, int n, int k){
	node* first = head;
	node* current = head;
	node* prevFirst = first;
	node* NEXT = NULL;
	node* PREV = NULL;
	for(int i = 0; i < (n/k); i++){
		for(int j = 0; j < k; j++){
			NEXT = current->next;
			current->next = PREV;
			PREV = current;
			current = NEXT;
		}
		if(first == head){
			head = PREV;
		}
		prevFirst->next = PREV;
		prevFirst = first;
		first->next = NEXT;
		PREV = first;
		first = NEXT;
	}
}
void printList(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
void insertAtTail(node* &head, int data){
	if(head == NULL){
		head = new node(data);
		return;
	}
	node* tail = head;
	while(tail->next != NULL){
		tail =  tail->next;
	}
	node* temp = new node(data);
	tail->next = temp;
}
void makeList(node* &head, int n){
	int data;
	for(int i = 0; i < n; i++){
		cin >> data;
		insertAtTail(head, data);
	}
}
int main(){
	node* head = NULL;
	int n, k;
	cin >> n >> k;
	makeList(head, n);
	k_Reverse(head, n, k);
	printList(head);
	return 0;
}