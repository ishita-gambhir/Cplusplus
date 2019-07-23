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
	bool empty(){
		return v.size() == 0;
	}
	void pop(){
		if(!empty()){
			v.pop_back();
		}
	}
	T top(){
		return v[v.size() - 1];
	}
};
template<typename t>
void makeStack(Stack<t> &s){
	int n;
	cin >> n;
	t data;
	for(int i = 0; i < n; i++){
		cin >> data;
		s.push(data);
	}
}
template<typename t>
void printStack(Stack<t> s){
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