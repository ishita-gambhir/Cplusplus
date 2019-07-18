#include<iostream>
using namespace std;
template<typename T>
class queue{
	int max_size;
	int* arr;
	int f;
	int b;
public:
	queue(int ms = 10){
		max_size = ms;
		arr = new T[max_size];
		f = -1;
		b = -1;
	}
	bool empty(){
		return (f == -1);
	}
	bool full(){
		return (b == f - 1 || (f == 0 && b == max_size - 1)); 
	}
	void push(T d){
		if(empty() && !full()){
			f = (f + 1) % max_size;
			b = (b + 1) % max_size;
			arr[b] = d;
		}
		else if(!full()){
			b = (b + 1) % max_size;
			arr[b] = d;
		}
		else{
			cout << "\noverflow!";
		}
	}
	void pop(){
		if(f == b){	//only 1 element
			f = -1;
			b = -1;
			return;
		}
		if(!empty()){
			f = (f + 1) % max_size;
			return;
		}
		cout << "\nunderflow!";
	}
	T front(){
		return arr[f];
	}
	T back(){
		return arr[b];
	}
};
int main(){
	queue<int> q(5);
	for(int i = 0; i < 6; i++){
		q.push(i);
	}
	cout << q.front() << " " << q.back();
	for(int i = 0; i < 6; i++){
		q.pop();
	}
	return 0;
}