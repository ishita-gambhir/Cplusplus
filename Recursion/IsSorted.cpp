#include<iostream>
using namespace std;
bool isSorted(long long int *Array, int numOfElements){
	if(numOfElements == 1){
		return true;
	}
	if(Array[0] < Array[1] && isSorted(Array + 1, numOfElements - 1)){
		return true;
	}
	return false;
}
int main(){
	int numOfElements;
	long long int arr[1000];
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> arr[i];
	}
	isSorted(arr, numOfElements) ? cout << "true" : cout << "false";
	return 0;
}