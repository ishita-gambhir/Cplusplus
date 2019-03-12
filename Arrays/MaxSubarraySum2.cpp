// max subarray sum optimised for n^2 time complexity
/*
calc cumulative sum for each index and store it in an array
	csum[i] = csum [i - 1] + array [i]
sum of arrays b\w i - j is csum [j] - csum [i - 1]

complexity: n + n^2 
*/
#include<iostream>
using namespace std;
int maxSubarraySum(int array[1000], int numOfelements){
	int cumulativeSum[1000], i, j, tempSum, maxSum = -1, left = -1, right = -1;
	cumulativeSum[0] = array[0];
	for(i = 1; i < numOfelements; i++){
		cumulativeSum[i] = cumulativeSum[i - 1] + array[i];
	}

	for(i = 0; i < numOfelements; i++){
		for(j = i; j < numOfelements; j++){
			if(i > 0){
				tempSum = cumulativeSum[j] - cumulativeSum[i - 1];
			}
			else{
				tempSum = cumulativeSum[j];
			}
			//cout << tempSum << " ";
			if(tempSum > maxSum){
				maxSum = tempSum;
				left = i;
				right = j;
			}
		}
	}
	for(i = left; i <= right; i++){
		cout << array[i] << " ";
	}
	return maxSum;
}
int main(){
	int array[1000], numOfelements;
	cin >> numOfelements;
	for(int i = 0; i <numOfelements; i++){
		cin >> array[i];
	}
	cout << maxSubarraySum(array, numOfelements);
	return 0;
}