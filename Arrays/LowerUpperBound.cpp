//Program to find the first and last occurance of an element in array using binary search
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
	cin >> key;
	cout << "Key: " << key << endl;
	lower = lowerBound(numOfElements, arr, key);
	if(lower == -1){
		cout << "Element not found\n";
	}
	else{
		cout << "First occurance at " << lower << endl;
	}
	upper = upperBound(numOfElements, arr, key);
	if(upper == -1){
		cout << "Element not found\n";
	}
	else{
		cout << "Last occurance at " << upper << endl;
	}
	return  0;
}