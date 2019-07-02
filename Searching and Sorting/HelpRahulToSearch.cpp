/*
Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

Input Format:
The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.

Constraints:
Output Format
Output the index of number in the array to be searched. Output -1 if the number is not found.

Sample Input
5
4
5
1
2
3
2
Sample Output
3
*/
#include<iostream>
using namespace std;
int pivot(int *array, int start, int end){
	while(start <= end){
		int mid = (start + end) / 2;
		if(array[mid] > array[mid + 1]){
			return mid;
		}
		if(array[mid] < array[mid - 1]){
			return mid - 1;
		}
		if(array[start] >= array[mid]){
			end = mid - 1;
		}
		else if(array[mid] >= array[end]){
			start = mid + 1;
		}
	}
	return end; //in case the array is sorted and not rotated.
}
int BinarySearch(int *array, int key, int start, int end){
	while(start <= end){
		int mid = (start + end) / 2;
		if(array[mid] == key){
			return mid;
		}
		if(array[mid] > key){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return -1;
}
int bSearchRotatedArr(int *array, int numOfElements, int pivotIndex, int key){
	if(array[0] <= key){
		return BinarySearch(array, key, 0, pivotIndex);
	}
	if(array[numOfElements - 1] >= key){
		return BinarySearch(array, key, pivotIndex + 1, numOfElements - 1);
	}
	return -1;
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
	int pivotIndex = pivot(array, 0, numOfElements - 1);
	cout << bSearchRotatedArr(array, numOfElements, pivotIndex, key);
	return 0;
}