/*
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/
#include<iostream>
using namespace std;

int main(){
	int n, i, j;
	char ch;
	cin >> n;
	for(i = 1; i <= n; i++){
		ch = '@';
		for(j = (n - i + 1); j > 0; j--){
			ch = ch + 1;
			cout << ch;
		}
		for(j = (n - i + 1); j > 0; j--){
			cout << ch;
			ch = ch - 1;
		}
		cout << endl;
	}
	return 0;
}