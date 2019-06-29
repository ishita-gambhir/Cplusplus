/*
You are given a sorted but rotated array. You need to fine the index of the pivot element of the array where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.

Input Format:
The first line denotes N - the size of the array. The following N lines each denote the numbers in the array.

Constraints:
Output Format
Output the index of the pivot of the array.

Sample Input
5
4
5
1
2
3
Sample Output
1
*/
#include<iostream>
using namespace std;
int main(){
	int numOfElements;
	cin >> numOfElements;
	int array[1000];
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	int start = 0, end = numOfElements - 1;
	while(start <= numOfElements - 1){
		int mid = (start + end) / 2;
		if(array[mid] < array[mid - 1]){
			cout << mid - 1;
			break;
		}
		if(array[mid] > array[mid + 1]){
			cout << mid;
			break;
		}
		if(array[start] >= array[mid]){
			end = mid - 1;
		}
		else if(array[mid] >= array[end]){
			start = mid + 1;
		}
	}
	return 0;
}
