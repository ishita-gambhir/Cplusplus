/*
You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

Input Format:
The first line consists of number of test cases T. Each test case consists of N followed by N integers.

Constraints:
1 <= N <= 100000

1 <= t <= 20

 -100000000 <= A[i] <= 100000000

Output Format
The maximum subarray sum

Sample Input
2
4
1 2 3 4
3
-10 5 10
Sample Output
10
15
*/
#include<iostream>
using namespace std;
int maxSubarraySum(int numOfElements, int array[100000000]){
	int i, currentSum = 0, maxSum = 0;
	for(i = 0; i < numOfElements; i++){
		currentSum += array[i];
		if(currentSum < 0){
			currentSum = 0;
		}
		if(currentSum > maxSum){
			maxSum = currentSum;
		}
	}
	return maxSum;
}

int main(){
	int numOfTestCases;
	cin >> numOfTestCases;
	for(int t = 1; t <= numOfTestCases; t++){
		int array[100000000], numOfelements;
	
		cin >> numOfelements;
		for(int i = 0; i < numOfelements; i++){
			cin >> array[i];
		}
		cout << maxSubarraySum(numOfelements, array) << endl;
	}
	return 0;
}