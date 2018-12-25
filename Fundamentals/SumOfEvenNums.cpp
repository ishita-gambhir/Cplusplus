/*
Program to calculate the sum of even numbers from 1...N using while loop
*/
#include<iostream>
using namespace std;

int main(){
	int n, counter = 2, sum = 0;
	cin >> n;

	while(counter <= n){
		sum = sum + counter;
		counter = counter +2;
	}
	cout << sum;
 	return 0;
}