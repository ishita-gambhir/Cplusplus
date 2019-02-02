/*
Program to demonstrate the working of the Adress of(&) operator
*/
#include<iostream>
using namespace std;
int main(){
		int x = 10;
		cout << &x << endl;	//output is a hexadecimal 

		float y = 10;
		cout << &y << endl;	//output is a hexadecimal number

		char ch = 'A';
		cout << &ch << endl;	//output is a character because of operator overloading (<< is at fault here)
		//to get rid of this problem, we change the datatype of the variable ch.
		//operator overloading won't happen if the 'cout <<' operator doesn't know its a char variable.
		cout << (void *)&ch << endl; //explicit type conversion
		//output is a hexadecimal number

	return 0;
}