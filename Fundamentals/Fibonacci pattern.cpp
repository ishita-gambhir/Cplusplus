/*
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format:
Constraints:
0 < N < 100

Output Format
Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34
*/
#include<iostream>
using namespace std;

int main(){
	int n, a = 0, b = 1, c, i, j;
	cin >> n;
	if(n >= 2){
		cout << a << endl;
		cout << b << " " << a+b << endl;
		a = b;
		for (i = 3; i <= n; i++){
			for(j = 0; j < i; j++){
				c = a + b;
				cout << c << " ";
				a = b;
				b = c;
			}
			cout << endl;
		}
	} 
	else if(n == 2){
		cout << a << endl;
		cout << b << " " << a+b << endl;
	}
	else{
		cout << a;
	}
	return 0;
}
