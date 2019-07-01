/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format:
Constraints:
Length of the arrays should be between 1 and 1000.

Output Format
Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3

approach:
sort the array
make another array with values 1 or 0 indicating whether the values has been used or not
check for target pairs[start the initial loop from behind, which will check for all values starting from 0 to n - 1// that number?(if available)]
change value in other array accordingly, and print simultaneously.
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[1000], target, numOfElements;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> arr[i];
	}
	cin >> target;
	sort(arr, arr + numOfElements);
	int left = 0, right = numOfElements - 1;
	while(left < right){
		if(arr[left] + arr[right] == target){
			cout << arr[left] << " and " << arr[right] << endl;
			left++;
			right--;
		}
		else if(arr[left] + arr[right] > target){
			right--;
		}
		else{
			left++;
		}

	}
	return 0;
}