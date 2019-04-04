/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that bubble sorts the array. Print the elements of sorted array.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.Bubble sort the array and print the Array.

Input Format:
Constraints:
N cannot be Negative. Range of Numbers can be between -1000000000 to 100000000.

Output Format
Sample Input
4
2
-18
45
30
Sample Output
-18
2
30
45
*/
#include<iostream>
using namespace std;
void bubbleSort(int numOfElements, int array[10000]){
	int i, j, temp;
	for(i = 0; i < numOfElements - 1; i++){
		for(j = 0; j < numOfElements - i - 1; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
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
	bubbleSort(numOfElements, array);
	for(int i = 0; i < numOfElements; i++){
		cout << array[i] << endl;
	}
	return 0;
}