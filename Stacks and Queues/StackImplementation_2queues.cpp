#include<iostream>
#include<queue>
using namespace std;
class stackUsingQueue{
	queue<int> *q1, *q2;
public:
	stackUsingQueue(){
		q1 = new queue<int>;
		q2 = new queue<int>;
	}
	void push(int data){
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
void makeStack(stackUsingQueue &s){
	int numOfElements;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		int data;
		cin >> data;
		s.push(data);
	}
}
void printStack(stackUsingQueue s){
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main(){
	stackUsingQueue s;
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