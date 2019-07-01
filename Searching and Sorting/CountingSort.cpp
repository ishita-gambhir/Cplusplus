/*
You are given an array, A. Sort this array using counting sort algorithm.

Input Format:
First line contains a single integer, n, denoting the size of the array. Next line contains n integers, denoting the elements of the array.

Constraints:
1<=N<=10^6 0<=Ai<=10^6

Output Format
Print the array in sorted order.

Sample Input
5
1 3 2 6 5
Sample Output
1 2 3 5 6
*/
#include<iostream>
using namespace std;
int main(){
	int numOfElements;
	cin >> numOfElements;
	int inputArray[1000005];
	int max_val = 0;
	for(int i = 0; i < numOfElements; i++){
		cin >> inputArray[i];
		max_val = max(max_val, inputArray[i]);
	}
	int frequencyArray[1000005] = {0};
	for(int i = 0; i < numOfElements; i++){
		int value = inputArray[i];
		frequencyArray[value]++;
	}
	//cout << max_val;//
	for(int i = 0; i <= max_val; i++){
		for(int j = 0; j < frequencyArray[i]; j++){
			cout << i << " ";
		}
	}
	return 0;
}