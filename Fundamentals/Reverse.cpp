/*
Take N as input, Calculate it's reverse also Print the reverse.

Input Format:
Constraints:
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321
*/
#include<iostream>
using namespace std;

int main(){
	int input = 0, reverse = 0, temp = 0;
	cin >> input;2
	temp = input;
	while(temp > 0){
		reverse += (temp % 10);
		temp /= 10;
		reverse *= 10;
	}
	cout << (reverse / 10);
	return 0;
}