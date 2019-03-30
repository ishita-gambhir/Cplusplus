/*
Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format:
Single Character .

Constraints:
-

Output Format
lowercase UPPERCASE Invalid

Sample Input
$
Sample Output
Invalid
*/
#include<iostream>
using namespace std;
void lowerUpper(int character){
	if(character >= 65 && character <= 90){
		cout << "UPPERCASE";
	}
	else if(character >= 97 && character <= 122){
		cout << "lowercase";
	}
	else{
		cout << "Invalid";
	}
}
int main(){
	char character;
	cin >> character;
	lowerUpper(character);
	return 0;
}