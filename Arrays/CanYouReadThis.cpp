/*
One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.

Input Format:
A single line contains the string.

Constraints:
|S|<=1000

Output Format
Print words present in the string, in the order in which it appears in the string.

Sample Input
IAmACompetitiveProgrammer
Sample Output
I
Am
A
Competitive
Programmer
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if(int(s[i]) >= 65 && int(s[i]) <= 90){
			cout << endl;
		}
		cout << s[i];
	}
	return 0;
}