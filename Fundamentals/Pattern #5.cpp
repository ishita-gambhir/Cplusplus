/*
Printing the given pattern with the help of for loop and bitwise operators.
1
01
101
0101
10101
*/
#include<iostream>
using namespace std;
int main(){
	int i = 0, j = 0, numOfLines = 0, x = 0;
	cin >> numOfLines;
	for(i = 1; i <= numOfLines; i++){
		for(j = 1; j <= i; j++){
			x = ((i + j) & 1) ? 0 : 1;
			cout << x; 
		}
		cout << endl;
	}
	return 0;
}