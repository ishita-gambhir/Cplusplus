/*
You will be given an array containing only 0s, 1s and 2s. you have sort the array in linear time that is O(N) where N is the size of the array.

Input Format:
The first line contains N, which is the size of the array. The following N lines contain either 0, or 1, or 2.

Constraints:
Each input element x, such that x ∈ { 0, 1, 2 }.

Output Format
Output the sorted array with each element separated by a newline.

Sample Input
5
0
1
2
1
2
Sample Output
0
1
1
2
2
*/
#include<iostream>
using namespace std;
int main(){
	int numOfElements, array[100000];
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	int low = 0, mid = 0, high = numOfElements - 1;
	while(mid < high){
		if(array[mid] == 1){
			mid++;
		}
		else if(array[mid] == 0){
			swap(array[mid], array[low]);
			low++;
			mid++;
		}
		else if(array[mid] == 2){
			swap(array[mid], array[high]);
			high--;
		}
	}
	for(int i = 0; i < numOfElements; i++){
		cout << array[i] << endl;
	}
	return 0;
}