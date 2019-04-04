/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that insertion sorts the array. Print the elements of sorted array.

Input Format:
Constraints:
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
3
4
2
1
Sample Output
1
2
3
4
*/
#include<iostream>
using namespace std;
void insertionSort(int numOfElements, int array[10000]){
	int i, j, currentNum;
	for(i = 1; i < numOfElements; i++){
		currentNum = array[i];
		for(j = i - 1; j >= 0 && array[j] > currentNum; j--){
			array[j+1] = array[j];
		}
		array[++j] = currentNum;
	}
}
int main(){
	int numOfElements, array[10000];
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	insertionSort(numOfElements, array);
	for(int i = 0; i < numOfElements; i++){
		cout << array[i] << endl;
	}
	return 0;
}