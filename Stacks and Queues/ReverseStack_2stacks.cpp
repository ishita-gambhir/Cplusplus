#include<iostream>
#include<stack>
using namespace std;
template<typename T>
void reverseStack(stack<T> &s1){
	stack<T> s2;
	for(int i = s1.size() - 1; i > 0; i--){
		T temp = s1.top();
		s1.pop();
		for(int j = 0; j < i; j++){
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(temp);
		for(int j = 0; j < i; j++){
			s1.push(s2.top());
			s2.pop();
		}
	}
}
void makeStack(stack<int> &s){
	for(int i = 1; i <=5; i++){
		s.push(i);
	}
}
void printStack(stack<int> s){
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main(){
	stack<int> S;
	makeStack(S);
	printStack(S);
	reverseStack(S);
	printStack(S);
	return 0;
}