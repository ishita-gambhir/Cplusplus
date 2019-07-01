//given a string "12345" return an integer 12345
/*
Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

Input Format:
Enter a number in form of a String

Constraints:
None

Output Format
Print the number after converting it into integer

Sample Input
1234
Sample Output
1234
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int Str2Int(string s, int i){
	if(i == s.length()){
		return 0;
	}
	return ((int(s[i]) - 48) * pow(10, s.length() - 1 - i)) + Str2Int(s, i+1);
}
int main(){
	string s;
	cin >> s;
	int num = Str2Int(s, 0);
	cout << num;
	return 0;
}