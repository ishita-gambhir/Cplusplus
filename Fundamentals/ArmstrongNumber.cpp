/*
Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where armstrong number is defined as follows

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
Print the value returned.

Input Format:
Integer

Constraints:
0 < N < 1000000000

Output Format
Boolean

Sample Input
371
Sample Output
true
*/
#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int Number){
	int temp, sum = 0;
	temp = Number;
	while(temp > 0){
		sum += pow((temp % 10), 3);
		temp /= 10;
	}
	if(sum == Number)
		return true;
	else
		return false;
}
int main(){
	int number;
	cin >> number;
	if(isArmstrong(number))
		cout << "true";
	else
		cout << "false";
	return 0;
}