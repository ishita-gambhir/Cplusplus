#include <iostream>
using namespace std;
int LSearch(int* array, int i, int numOfElements, int key){
	if(i == numOfElements){
		return -1;
	}
	if(array[i] == key){
		return i;
	}
	LSearch(array, i+1, numOfElements, key);
}
int main(){
	int numOfElements;
	cin >> numOfElements;
	int array[100];
	for (int i = 0; i < numOfElements; ++i){
		cin >> array[i];
	}
	int key;
	cin >> key;
	cout << LSearch(array, 0, numOfElements, key);
	return 0;
}