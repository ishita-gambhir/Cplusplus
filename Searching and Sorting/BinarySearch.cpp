/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input a number M. Write a function which returns the index on which M is found in the array, in case M is not found -1 is returned. Print the value returned.You can assume that the array is sorted, but you’ve to optimize the finding process. For an array of size 1024, you can make 10 comparisons at maximum.

1.It reads a number N.
2.Take Another N numbers as input in Ascending Order and store them in an Array.
3.Take Another number M as input and find that number in Array.
4.If the number M is found, index of M is returned else -1 is returned.Print the number returned.

Input Format:
Constraints:
N cannot be Negative. Range of Numbers N and M can be between -1000000000 to 1000000000

Output Format
Sample Input
5
3
5
6
9
78
6
Sample Output
2
*/
#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int numOfElements, int array[], int key){
	sort(array, array + numOfElements);
	int start = 0, end = numOfElements - 1, mid; 
	while(start <= end){
		mid = (start + end) / 2;
		if(array[mid] == key){
			return mid;
			break;
		}
		else if(array[mid] > key){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return -1;
}
int main(){
	int numOfElements, array[1000000000], key;
	int found;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	cin >> key;
	found = binarySearch(numOfElements, array, key);
	if(found == -1){
		cout << -1;
	}
	else{
		cout << found;
	}
	return 0;
}
