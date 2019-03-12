#include<iostream>
using namespace std;

void linearSearch(int numOfElements, int arrayOfNum[1000], int searchKey){
	int i = 0;
	for(i = 0; i < numOfElements; i++){
		if(searchKey == arrayOfNum[i]){
			cout << searchKey << " found at index: " << i;
			break;
		}
	}
	if(i == numOfElements){
		cout << searchKey << " Not found!";
	}
}

int main(){
	int key, array[1000], numOfElements;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	cin >> key;
	linearSearch(numOfElements, array, key);
	return 0;
}
