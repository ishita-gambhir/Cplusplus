/*
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
*/
#include<iostream>
#include<cmath>
using namespace std;
int BinToDec(int BinaryNum){
	int powerOf2 = 0, DecimalNum = 0;
	while(BinaryNum > 0){
		DecimalNum += (BinaryNum % 2) * pow(2, powerOf2);
		BinaryNum /= 10;
		powerOf2++;
	}
	return DecimalNum;
}
int main(){
	int Binary = 0;
	cin >> Binary;
	cout << BinToDec(Binary);
	return 0;
}