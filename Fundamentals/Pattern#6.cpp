/*
MANMOHAN LOVES PATTERNS- II
Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

Input Format:
Single integer N denoting number of lines of the pattern.

Constraints:
N<=1000

Output Format
Pattern.

Sample Input
5
Sample Output
1
11
202
3003
40004
*/
#include<iostream>
using namespace std;
void printFor2(int x){
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= i; j++){
			cout << "1";
		}
		cout << endl;
	}
}
int main(){
	int n = 0, x = 0;
	cin >> n;
	if(n >= 2)
		x = 2;
	else
		x = n;
	printFor2(x);
	for(int i = 3; i <= n; i++){
		for(int j = 1; j <= i; j++){
			if(j == 1 || j == i)
				cout << i - 1;
			else
				cout << "0";
		}
		cout << endl;
	}
	return 0;
}