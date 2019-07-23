#include<iostream>
#include<queue>
using namespace std;
template <typename T>
class stackUsingQueue{
	queue<T> *q1, *q2;
public:
	stackUsingQueue(){
		q1 = new queue<T>;
		q2 = new queue<T>;
	}
	void push(T data){
		q1->push(data);
	}
	void pop(){
		for(int i = 0; i < q1->size() - 1; i++){
			q2->push(q1->front());
			q1->pop();
		}
		q1->pop();
		swap(q1, q2);
	}
	int top(){
		return q1->back();
	}
	bool empty(){
		return q1->empty();
	}
	~stackUsingQueue(){
		delete q1;
		delete q2;
	}
};
template <typename T>
void makeStack(stackUsingQueue<T> &s){
	int numOfElements;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		T data;
		cin >> data;
		s.push(data);
	}
}
template <typename T>
void printStack(stackUsingQueue<T> s){
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main(){
	stackUsingQueue<int> s;
	//makeStack(s);
	printStack(s);
	s.pop();
	s.push(-1);
	printStack(s); 
	s.push(1);
	s.push(2);
	cout << s.top();
	return 0;
}