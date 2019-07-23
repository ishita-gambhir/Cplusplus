/* We are given a hashmap which maps all the letters with number. Given 1 is
mapped with A, 2 is mapped with B…..26 is mapped with Z. Given a number, you
have to print all the possible strings.

Input Format:
A single line contains a number.

Constraints:
Number is less than 10^6

Output Format
Print all the possible strings in sorted order in different lines.

Sample Input
123
Sample Output
ABC
AW
LC
*/
#include<iostream>
#include<string>
using namespace std;
void printMappedStrings(char* MAP, string inputStr, string outputStr = "", int start = 0){
	//base case
	if(start == inputStr.length()){
		outputStr.push_back('\0');
		cout << outputStr << endl;
		return;
	}
	//rec case
	for(int i = start; i < inputStr.length(); i++){
		string temp = inputStr.substr(start, (i - start + 1));
		int num = stoi(temp);
		if(num < 27){
			outputStr.push_back(MAP[num]);
		}
		else{
			return;
		}
		printMappedStrings(MAP, inputStr, outputStr, i + 1);
		outputStr.pop_back();
	}
}
int main(){
	char MAP[27] = {' '};
	for(int i = 1; i <= 26; i++){
		MAP[i] = char(i + 64);
	}
	string str;
	cin >> str;
	printMappedStrings(MAP, str);
	return 0;
}