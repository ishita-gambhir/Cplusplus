/*
Take as input str, a string. str represents keys pressed on a nokia phone keypad. We are concerned with all possible words that can be written with the pressed keys.

Assume the following alphabets on the keys: 1 -> abc , 2 -> def , 3 -> ghi , 4 -> jkl , 5 -> mno , 6 -> pqrs , 7 -> tuv , 8 -> wx , 9 -> yz

E.g. “12” can produce following words “ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf”

a. Write a recursive function which returns the count of words for a given keypad string. Print the value returned.

b.Write a recursive function which prints all possible words for a given keypad string (void is the return type for function).

Input Format:
Enter a number

Constraints:
None

Output Format
Display the total no. of words and display all the words in a space separated manner

Sample Input
12
Sample Output
ad ae af bd be bf cd ce cf
9
*/
#include<iostream>
#include<string>
using namespace std;
void printSubStrings(string keypad[], string inputStr, int &count, string outputStr = "", int inIndex = 0){
	if(inIndex == inputStr.length()){
		outputStr.push_back('\0');
		cout << outputStr << " ";
		count++;
		return;
	}
	int number = inputStr[inIndex] - '0';
	for(int i = 0; keypad[number][i] != '\0'; i++){
		outputStr.push_back(keypad[number][i]);
		printSubStrings(keypad, inputStr, count, outputStr, inIndex + 1);
		outputStr.pop_back();
	}
}
int main(){
	string keypad[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};
	string str;
	cin >> str;
	int count = 0;
	printSubStrings(keypad, str, count);
	cout << endl << count;
	return 0;
}