/*
Pointers
*/
#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int *aptr = &a;
	cout << "Value of a: " << a << endl;
	cout << "Address of a: " << &a << endl;
	cout << "Address of a as stored in pointer: " << aptr << endl;
	cout << "Size of int datatype: " << sizeof(a) << endl;
	cout << "Size of the pointer variable of int datatype: " << sizeof(aptr) << endl;

	float pi = 3.14;
	float *piPtr = &pi;
	cout << "Value of pi: " << pi << endl;
	cout << "Address of pi: " << &pi << endl;
	cout << "Address of pi as stored in pointer: " << piPtr << endl;
	cout << "Size of float datatype: " << sizeof(pi) << endl;
	cout << "Size of the pointer variable of float datatype: " << sizeof(piPtr) << endl;

	char ch = 'A';
	char *chPtr = &ch;
	cout << "Value of ch: " << ch << endl;
	cout << "Address of ch: " << (void *)&ch << endl;
	cout << "Address of ch as stored in pointer: " << chPtr << endl; // DOUBT! GIVES GARBAGE ANSWER
	cout << "Size of char datatype: " << sizeof(ch) << endl;
	cout << "Size of the pointer variable of char datatype: " << sizeof(chPtr) << endl;
	return 0;
}
