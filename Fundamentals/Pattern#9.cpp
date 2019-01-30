/*
Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Input Format:
Constraints:
0 < N < 100
*/
#include<iostream>
using namespace std;
int main(){
	int n = 0, i = 0, j = 0;
	cin >> n;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			if(j == i || j == 1)
				cout << i << " ";
			else
				cout << "0 ";
		}
		cout << endl;
	}
	return 0;
}