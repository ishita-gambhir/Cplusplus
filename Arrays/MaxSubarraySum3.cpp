//Kadane's algorithm for maximum subarray sum

#include<iostream>
using namespace std;
int maxSubarraySum(int numOfElements, int array[1000]){
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
	int array[1000], numOfElements;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	cout << maxSubarraySum(numOfElements, array);
	return 0;
}