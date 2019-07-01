/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

Input Format:
Enter a number N(size of the array) and add N more numbers to the array Enter number M to be searched in the array

Constraints:
None

Output Format
Display all the indices at which number M is found in a space separated manner

Sample Input
5
3
2
1
2
3
2
Sample Output
1 3
*/
#include<iostream>
using namespace std;
void printIndices(int numOfElements, int* array, int key, int i = 0){
	if(i == numOfElements){
		return;
	}
	if(array[i] == key){
		cout << i << " ";
	}
	printIndices(numOfElements, array, key, i + 1);
}
int main(){
	int numOfElements;
	cin >> numOfElements;
	int array[10000];
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	int key;
	cin >> key;
	printIndices(numOfElements, array, key);
	return 0;
}