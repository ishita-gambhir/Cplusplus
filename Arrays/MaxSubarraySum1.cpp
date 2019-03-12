//program to find the largest sum of elements of subarrays possible

#include<iostream>
using namespace std;
int maxSubarraySum(int numOfelements, int array[1000]){
	int i, j, k, maxSum = -1, sumTemp = 0;
	for(i = 0; i < numOfelements; i++){
		for(j = i; j < numOfelements; j++){
			sumTemp = 0;
			for(k = i; k <= j; k++){
				sumTemp += array[k];
			}
			if(sumTemp > maxSum){
				maxSum = sumTemp;
			}
		}
	}
	return maxSum;
}
int main(){
	int array[1000], numOfelements;
	cin >> numOfelements;
	for(int i = 0; i < numOfelements; i++){
		cin >> array[i];
	}
	cout << maxSubarraySum(numOfelements, array);
}