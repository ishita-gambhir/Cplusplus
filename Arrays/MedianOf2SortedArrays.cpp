/*
We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

Input Format:
First line contains the input n. Second and Third line contains n space separated integers.

Constraints:
N < 1000

Output Format
Print the median in a single line.

Sample Input
5
1 3 5 7 9
2 4 6 8 10
Sample Output
5
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int numOfElements, arr1[1000], arr2[1000], arr[2000], i;
	cin >> numOfElements;
	for(i = 0; i < numOfElements; i++){
		cin >> arr1[i];
	}
	for(i = 0; i < numOfElements; i++){
		cin >> arr2[i];
	}
	for(i = 0; i < numOfElements; i++){
		arr[i] = arr1[i];
	}
	int j = 0;
	for(; i < 2 * numOfElements; i++){
		arr[i] = arr2[j++];
	}
	sort(arr, arr + 2 * numOfElements);
	cout << arr[numOfElements - 1];
	return 0;
}