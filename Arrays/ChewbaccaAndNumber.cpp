/*
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format:
The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

Constraints:
x <= 100000000000000000

Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input
4545
Sample Output
4444
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int original, inverted = 0;
	int _10power = 0;
	cin >> original;
	while(original){
		if(original % 10 > 4){
			original += 9 - 2 * (original % 10);
		}
		inverted += (original % 10) * pow(10, _10power++);
		original /= 10;
	}
	long long int temp = inverted;
	int lastDigit = temp / pow(10, --_10power);
	if(lastDigit % 10 == 0)
		inverted += 9 * pow(10, _10power);
	cout << inverted;
	return 0;
}