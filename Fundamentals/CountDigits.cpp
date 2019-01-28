/*
Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.

Input Format:
Integer (A number) Integer (A digit)

Constraints:
0 <= N <= 1000000000 0 <= Digit <= 9

Output Format
Integer (count of times digit occurs in the number)

Sample Input
5433231 
3
Sample Output
3
*/
#include<iostream>
using namespace std;
int digitCount(int number, int digit){
	int count = 0;
	while(number > 0){
		if(number % 10 == digit)
			count++;
		number /= 10;
	}
	return count;
}
int main(){
	int digit = 0, number = 0;
	cin >> number >> digit;
	cout << digitCount(number, digit);
	return 0;
}