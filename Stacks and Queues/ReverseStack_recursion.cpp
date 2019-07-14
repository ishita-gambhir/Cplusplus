/*
Reverse a Stack using Recursion.

Input Format:
First line contains an integer N (size of the stack). Next N lines follow each containing an integer to be stored in the stack where the last integer is at the top of the stack.

Constraints:
Output Format
Output the values of the reversed stack with each value in following line.

Sample Input
3
3
2
1
Sample Output
3
2
1
*/
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
		cout << s.top() << endl;
		s.pop();
	}
	//cout << endl;
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
	//printStack(s);
	reverseStack(s);
	printStack(s);
	return 0;
}