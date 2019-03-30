/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format:
String

Constraints:
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int i, j, currentFrequency = 0, maxFrequency = 0;
	char currentChar, maxFreqChar;
	for(i = 0; i < s.size(); i++){
		currentChar = s[i];
		currentFrequency = 0;
		for(j = 0; j < s.size(); j++){
			if(s[j] == currentChar){
				currentFrequency++;
			}
		}
		if(currentFrequency > maxFrequency){
			maxFrequency = currentFrequency;
			maxFreqChar = currentChar;
		}
	}
	cout << maxFreqChar;
	return 0;
}