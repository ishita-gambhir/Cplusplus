/*
Program to find the sum of the digits of a given number
*/
#include<iostream>
//#include<cmath>
using namespace std;

int main(){
	int num, temp, sum = 0;
	cin >> num;
	temp = num;
	while(temp != 0){
		sum = sum + (temp % 10);
		temp = temp / 10;
	}
	cout << sum;
	return 0;
}