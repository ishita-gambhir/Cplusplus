/*
Program to print the first n terms of the fibonaci sequence using for loop
*/
#include<iostream>
using namespace std;

int main(){
	int n, a = 0, b = 1, c, i;
	cin >> n;
	if(n >= 2){
		cout << a << endl;
		cout << b << endl;
		for(i = 0; i < (n - 2); i++){
			c = a + b;
			cout << c << endl;
			a = b;
			b = c;
		}
	} 
	else if(n == 2){
		cout << a << b << endl;
	}
	else{
		cout << a;
	}
	return 0;
}