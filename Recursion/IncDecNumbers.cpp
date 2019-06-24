//given an integer n, print all numbers from 1 to n in inc and dec order using recursion
#include <iostream>
using namespace std;
void printIncreasing(int n){
	if(n == 0){
		return;
	}
	printIncreasing(n-1);
	cout << n << " ";
}
void printDecreasing(int n){
	if(n == 0){
		return;
	}
	cout << n << " ";
	printDecreasing(n-1);
}
int main(){
	int n;
	cin >> n;
	printIncreasing(n);
	printDecreasing(n);
	return 0;
}