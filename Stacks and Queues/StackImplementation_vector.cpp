#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Stack{
	std::vector<T> v;
public:
	void push(T data){
		v.push_back(data);
	}
	void pop(){
		v.pop_back();
	}
	bool empty(){
		return v.size() == 0;
	}
	T top(){
		return v[v.size() - 1];
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
	Stack<int> s1;
	makeStack(s1);
	printStack(s1);
	printStack(s1);
	return 0;
}