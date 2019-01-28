/*
Take the following as input.

Minimum Fahrenheit value
Maximum Fahrenheit value
Step

Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 17
20 6
40 4
60 15
80 26
100 37

Input Format:
Constraints:
0 < Min < 100 Min < Max < 500 0 < Step

Output Format
Sample Input
0 
100 
20
Sample Output
0 -17 
20 -6 
40 4 
60 15 
80 26 
100 37
*/
#include<iostream>
using namespace std;
int main(){
	int min = 0, max = 0, step = 20, Celsius = 0, Fahrenheit = 32, i = 0;
	cin >> min >> max >> step;
	for(Fahrenheit = min; Fahrenheit <= max; Fahrenheit += step){
		Celsius = (5 * (Fahrenheit - 32)) / 9;
		cout << Fahrenheit << " " << Celsius << endl;
	}
}