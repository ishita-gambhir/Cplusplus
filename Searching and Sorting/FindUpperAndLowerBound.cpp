/*
Find position of the last and first occurrence of a given number in a sorted array. If number not exist then print lower and upper bound as -1.

Input Format:
An integer n denoting the size of the array followed by n integers denoting array elements Followed by T testcases Each testcase contains integer x (whose positions are to be found)

Constraints:
Output Format
Lower bound position followed by upper bound position separates by space in each line

Sample Input
5
1 2 3 3 4
3
2
3
10
Sample Output
1 1
2 3
-1 -1
*/
#include<iostream>
#include<algorithm>
using namespace std;
int lowerBound(int numOfElements, int arr[1000], int key){
	int start = 0, end = numOfElements - 1, mid, ans = -1;
	while(start <= end){
		mid = (start + end) / 2;
		if(arr[mid] == key){
			ans = mid;
			end = mid - 1;
		}
		else if(arr[mid] > key){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return ans;
}
int upperBound(int numOfElements, int arr[1000], int key){
	int start = 0, end = numOfElements - 1, mid, ans = -1;
	while(start <= end){
		mid = (start + end) / 2;
		if(arr[mid] == key){
			ans = mid;
			start = mid + 1;
		}
		else if(arr[mid] > key){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return ans;
}
int main(){
	int numOfElements, arr[1000], key, lower, upper;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> arr[i];
	}
	int testcases;
	cin >> testcases;
	while(testcases--){
		cin >> key;
		//cout << "Key: " << key << endl;
		lower = lowerBound(numOfElements, arr, key);
		if(lower == -1){
			cout << "-1 ";
		}
		else{
			cout << lower << " ";
		}
		upper = upperBound(numOfElements, arr, key);
		if(upper == -1){
			cout << "-1\n";
		}
		else{
			cout << upper << endl;
		}
	}
	return  0;
}