/*
Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.

Input Format:
Character (ch)

Constraints:
No constraints

Output Format
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input
s
Sample Output
L
*/
#include<iostream>
using namespace std;
char charType(int character){
	if(character >= 65 && character <= 90){
		return 'U';
	}
	else if(character >= 97 && character <= 122){
		return 'L';
	}
	else{
		return 'I';
	}
}
int main(){
	char character;
	cin >> character;
	cout << charType(character);
	return 0;
}