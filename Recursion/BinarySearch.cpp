#include <iostream>
#include <algorithm>
using namespace std;
int BinarySearch(int* array, int front, int back, int key){
	if(front > back){
		return -1;
	}
	int mid = (front + back) / 2;
	if(array[mid] == key){
		return mid;
	}
	if(array[mid] > key){
		return BinarySearch(array, front, mid - 1, key);
	}
	if(array[mid] < key){
		return BinarySearch(array, mid + 1, back, key);
	}
}
int main(){
	int numOfElements;
	cin >> numOfElements;
	int array[100];
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	sort(array, array + numOfElements);
	int key;
	cin >> key;
	cout << BinarySearch(array, 0, numOfElements - 1, key);
	return 0;
}