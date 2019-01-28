/*
Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format:
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

Constraints:
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int numOfTestCases = 0, decimalNum = 0, Binary = 0, i = 0, powerOf2 = 0;
	cin >> numOfTestCases;
	for(i = 0; i < numOfTestCases; i++){
		powerOf2 = 0;
		decimalNum = 0;
		cin >> Binary;
		while(Binary > 0){
			decimalNum += (Binary % 10) * pow(2, powerOf2);
			Binary /= 10;
			powerOf2++;
		}
		cout << decimalNum << endl;
	}
	return 0;
}