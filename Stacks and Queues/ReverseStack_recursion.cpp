#include<iostream>
#include<stack>
using namespace std;
void makeStack(stack<int> &s){
	int numOfElements;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		int data;
		cin >> data;
		s.push(data);
	}
}
void printStack(stack<int> s){
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
void insertAtBottom(stack<int> &s, int data){
	if(s.empty()){
		s.push(data);
		return;
	}
	int temp = s.top();
	s.pop();
	insertAtBottom(s, data);
	s.push(temp);
}
void reverseStack(stack<int> &s){
	if(s.empty()){
		return;
	}
	int temp = s.top();
	s.pop();
	reverseStack(s);
	insertAtBottom(s, temp);
}
int main(){
	stack<int> s;
	makeStack(s);
	printStack(s);
	reverseStack(s);
	printStack(s);
	return 0;
}