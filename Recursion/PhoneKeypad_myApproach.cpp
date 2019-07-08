//phone keypad
/*
You will be given a numeric string S. Print all the possible codes for S.

Following vector contains the codes corresponding to the digits mapped.

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

For example, string corresponding to 0 is " " and 1 is ".+@$"

Input Format:
A single string containing numbers only.

Constraints:
length of string <= 10

Output Format
All possible codes one per line in the following order.

The letter that appears first in the code should come first

Sample Input
12
Sample Output
.a
.b
.c
+a
+b
+c
@a
@b
@c
$a
$b
$c
*/
#include<iostream>
#include<string>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void printSubstrings(string inputString, int in_index, string outputString = "", int out_index = 0){
	if(inputString[in_index] == '\0'){
		outputString[out_index] = '\0';
		cout << outputString << endl;
		return;
	}
	int digit = inputString[in_index] - '0';
	for(int i = 0; table[digit][i] != '\0'; i++){
		outputString.append(1, table[digit][i]);
		printSubstrings(inputString, in_index + 1, outputString, out_index + 1);
		outputString.erase(outputString.begin() + out_index);
	}
}
int main(){
	string number;
	cin >> number;
	printSubstrings(number, 0);
	return 0;
}