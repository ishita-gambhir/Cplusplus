/*
Given coefficients of a quadratic equation , you need to print the nature of the roots (real and distinct , real and equal , imaginary).

Input Format:
First contains three coefficients a,b,c from the equation ax^2 + bx + c = 0.

Constraints:
Output Format
Output contains one/two lines.First line contains nature of the roots .The next line contains roots separated by a space if they exist. If roots are imaginary do not print the roots.

Sample Input
1 -11 28
Sample Output
Real and Distinct
4 7
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
