/*
Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

Input Format:
String

Constraints:
A string of length between 1 to 1000

Output Format
String

Sample Input
aabccba
Sample Output
abcba
*/
#include<iostream>
using namespace std;
void removeDuplicates(char* inputString, char* outputString, int i = 0, int j = 0){
	if(inputString[i] == '\0'){
		outputString[j] = '\0';
		cout << outputString;
		return;
	}
	if(inputString[i] != inputString[i + 1]){
		outputString[j] = inputString[i];
		removeDuplicates(inputString, outputString, i + 1, j + 1);
	}
	else{
		removeDuplicates(inputString, outputString, i + 1, j);
	}
}
int main(){
	char inputString[1000], outputString[1000];
	cin >> inputString;
	removeDuplicates(inputString, outputString);
	return 0;
}