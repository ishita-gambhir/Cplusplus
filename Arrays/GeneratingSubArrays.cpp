// A program that prints all possible subarrays of a given array
#include<iostream>
using namespace std;
void generateSubArrays(int numOfElements, int array[1000]){
	for(int i = 0; i < numOfElements; i++){
		for(int j = i; j < numOfElements; j++){
			for(int k = i; k <= j; k++){
				cout << array[k] << " ";
			}
			cout << endl;
		}
	}
}
int main(){
	int numOfElements, array[1000];
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	generateSubArrays(numOfElements, array);
	return 0;
}