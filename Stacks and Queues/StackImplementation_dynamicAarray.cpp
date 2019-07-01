#include<iostream>
using namespace std; 

template<typename T>
class Stack{
	T *arr;
	int currentSize;
	int maxSize;
	int rear;
public:
	Stack(int ms = 10){
		rear = -1;
		currentSize = 0;
		maxSize = ms;
		arr = new T[ms];
	}
	bool empty(){
		return currentSize == 0;
	}
	bool full(){
		return currentSize >= maxSize;
	}
	void push(T data){
		if(!full()){
			rear = rear + 1;
			arr[rear] = data;
			currentSize++;
		}
		else{
			cout << "\nStack overflow!";
		}
	}
	void pop(){
		if(!empty()){
			rear = rear - 1;
			currentSize--;
		}
		else{
			cout << "\nUnderflow!";
		}
	}
	T top(){
		return arr[rear];
	}
};
void makeStack(Stack<int> &s){
	for(int i = 1; i <= 5; i++){
		s.push(i);
	}
}
void printStack(Stack<int> s){
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main(){
	Stack<int> s1(10);
	makeStack(s1);
	printStack(s1);
	//printStack(s1);
	return 0;
}