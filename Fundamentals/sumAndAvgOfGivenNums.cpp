/*
Program to find sum and average of n given numbers.
Input: int n, followed by n space seprated integers
Output: sum and average of n numbers
*/
#include<iostream>
using namespace std;

int main(){
	int n, num, i = 1, sum = 0;
	float avg;
	cin >> n;
	while(i <= n){
		cin >> num;
		sum = sum + num;
		i = i + 1;
	}
	avg = sum/float(n);
	cout << "Sum is " << sum << endl;
	cout << "Average is "<< avg <<endl;
	return 0;
}