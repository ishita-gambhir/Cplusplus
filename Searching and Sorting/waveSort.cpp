/*

*/
#include<iostream>
using namespace std;
void waveSort(int numOfElements, int array[10000]){
	int i, j, temp;
	for(i = 0; i < numOfElements; i += 2){
		//check left element
		if(i != 0){
			if(array[i] < array[i - 1]){
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			}
		}
		//check right element
		if(i != numOfElements - 1){
			if(array[i] < array[i + 1]){
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}
int main(){
	int numOfElements, array[10000];
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	waveSort(numOfElements, array);
	for(int i = 0; i < numOfElements; i++){
		cout << array[i] << endl;
	}
	return 0;
}