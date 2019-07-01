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
int main(){
	int a = 0, b = 0, c = 0, d = 0, r1 = 0, r2 = 0;
	cin >> a >> b >> c;
	d = ((b*b) - (4 * a * c));
	r1 = (((-b) - pow(d, 0.5))/(2 * a));
	r2 = (((-b) + pow(d, 0.5))/(2 * a));
	if( d > 0){
		cout << "Real and Distinct" << endl;
		cout << r1 << " " << r2;
	}
	else if(d == 0){
		cout << "Real and Equal" << endl;
		cout << r1 << " " << r2;
	}
	else{
		cout << "Imaginary";
	}

	return 0;
}