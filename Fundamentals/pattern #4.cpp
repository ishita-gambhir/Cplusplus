/*
Printing the given pattern with the help of for loop.
1
01
101
0101
10101
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	bool x;
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= i; j++){
			x = (i & 1) ? 1 : 0;
			(j % 2) ? (cout << x) : (cout << (!x));
		}
		cout << endl;
	}
	return 0;
}
//Alternately can use val = 0 and then val = 1 - val to update it every time. Initialise val according to whether i even or odd.