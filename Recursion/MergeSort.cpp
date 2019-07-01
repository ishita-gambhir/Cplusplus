//merge sort using recursion
/*
Given an array A, of N elements. Sort the array using mergesort algorithm.

Input Format:
A single integer, N, denoting the number of elements in array. Next line contains N integers, denoting the elements of array.

Constraints:
1<=N<=2*10^5 |Ai|<=10^9

Output Format
Print in a single line, N spaced integers, denoting the elements of array A in sorted order.

Sample Input
5
3 6 4 1 2
Sample Output
1 2 3 4 6 
*/
#include<iostream>
using namespace std;
void merge(long int* a, int start, int end){
	int mid = (start + end)/2;
	int i = start;
	int j = mid + 1;
	int k = start;
	long int temp[200000];
	while(i <= mid && j <= end){
		if(a[i] <= a[j]){
			temp[k++] = a[i++];
		}
		else{
			temp[k++] = a[j++];
		}
	}
	while(i <= mid){
		temp[k++] = a[i++];
	}
	while(j <= end){
		temp[k++] = a[j++];
	}
	for(i = start; i <=  end; i++){
		a[i] = temp[i];
	}
}
void mergeSort(long int array[], int start, int end){
	if(start >= end){
		return;
	}
	int mid = (start + end)/2;
	mergeSort(array, start, mid);
	mergeSort(array, mid + 1, end);
	merge(array, start, end);
}
int main(){
	int numOfElements;
	cin >> numOfElements;
	long int array[200000];
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	mergeSort(array, 0, numOfElements - 1);
	for(int i = 0; i < numOfElements; i++){
		cout << array[i] << " ";
	}
	return 0;
}