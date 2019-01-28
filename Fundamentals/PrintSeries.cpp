/*
Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

Input Format:
Constraints:
0 < N1 < 100 0 < N2 < 100

Output Format
Sample Input
10 
4
Sample Output
5 
11 
14 
17 
23 
26 
29 
35 
38 
41
*/
#include<iostream>
using namespace std;
int main(){
	int n1 = 0, n2 = 0, n = 1, numberOfTerms = 0;
	cin >> n1 >> n2;
	while (numberOfTerms != n1){
		if((3 * n + 2) % n2 != 0){
			cout << (3 * n + 2) << endl;
			numberOfTerms++;
		}
		n++;
	}
	return 0;
}