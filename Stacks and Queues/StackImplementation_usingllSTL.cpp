//later
#include<iostream>
#include<list>
using namespace std;
template<typename T>
class Stack{
	list<T> ll;
public:
	void push(T data){
		ll.push_back(data);
	}
	bool empty(){
		return ll.size() == 0;
	}
	void pop(){
		if(!empty())
			ll.pop_back();
	}
	T top(){
		return ll.back();
	}
};
template<typename T>
void makeStack(Stack<T> &s){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int data;
		cin >> data;
		s.push(data);
	}
}
template<typename T>
void printStack(Stack<T> s){
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
	return 0;
}