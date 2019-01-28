/*
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format:
Constraints:
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
*/
#include<iostream>
using namespace std;

int main(){
	int Number, numberOfFactors = 0;
	cin >> Number;
	for(int i = 1; i <= Number; i++){
		if(Number % i == 0)
			numberOfFactors++;
	}
	if(numberOfFactors == 2)
		cout << "Prime";
	else
		cout << "Not Prime";
	return 0;
}
