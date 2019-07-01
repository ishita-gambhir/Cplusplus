/*
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
*/
#include<iostream>
#include<cmath>
using namespace std;
int DecToOct(int DecimalNum){
	int OctcalNum = 0, power = 0;
	while(DecimalNum){
		OctcalNum += (DecimalNum % 8) * pow(10, power);
		power++;
		DecimalNum /= 8;
	}
	return OctcalNum;
}
int main(){
	int Decimal = 0;
	cin >> Decimal;
	cout << DecToOct(Decimal);
	return 0;
}