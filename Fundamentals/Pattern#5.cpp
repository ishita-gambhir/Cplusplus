/*
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111

100001

Input Format:
Single number N.

Constraints:
N<=1000

Output Format
Pattern corresponding to N.

Sample Input
6
Sample Output
1 
11
111 
1001 
11111
100001
*/
#include<iostream>
using namespace std;
void printFor3(int x){
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
	if(n >= 3)
		x = 3;
	else
		x = n;
	printFor3(x);
	for(int i = 4; i <= n; i++){
		for(int j = 1; j <= i; j++){
			if(i % 2 == 0){
				if(j == 1 || j == i)
					cout << "1";
				else
					cout << "0";
			}
			else
				cout << "1";
		}
		cout << endl;
	}
	return 0;
}