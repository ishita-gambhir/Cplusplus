/*
Program to check out type conversions and study various cases.
*/
#include<iostream>
using namespace std;

int main(){
	int i = 2;
	float f= 3.14;
	char ch = 'A';
	bool b = 1;

	cout << i + f;
	cout << ch + i;
	cout << ch + f;
	cout << ch + b;
	cout << f + b;
	cout << i + b;

	ch = ch + i;
	cout << ch;
	i = ch + i;
	b = ch
	cout << i;
	cout << int(f);
	cout << int(ch);
	cout << b;
	return 0;
}