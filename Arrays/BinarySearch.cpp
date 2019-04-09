#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int numOfElements, int array[10000], int key){
	sort(array, array + numOfElements);
	int start = 0, end = numOfElements - 1, mid; 
	while(start <= end){
		mid = (start + end) / 2;
		if(array[mid] == key){
			return mid;
			break;
		}
		else if(array[mid] > key){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return -1;
}
int main(){
	int numOfElements, array[10000], found, key;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	cin >> key;
	found = binarySearch(numOfElements, array, key);
	if(found == -1){
		cout << "Element not found!";
	}
	else{
		cout << "Element found at index " << found;
	}
	return 0;
}