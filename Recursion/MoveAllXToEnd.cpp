/*
Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end. E.g. for “abexexdexed” return “abeedeedxxx”. Print the value returned

Input Format:
Enter the string

Constraints:
None

Output Format
Display the string with all x's moved at the end

Sample Input
axbxa
Sample Output
abaxx
*/
#include<iostream>
#include<string>
using namespace std;
void appendX2end(string &str, int index, int org_len){
	if(index == str.length()){
		str.append((org_len - str.length()), 'x');
		return;
	}
	if(str[index] == 'x'){
		str.erase(str.begin() + index);
		appendX2end(str, index, org_len);
	}
	else{
		appendX2end(str, index + 1, org_len);
	}
}
int main(){
	string str;
	cin >> str;
	appendX2end(str, 0, str.length());
	cout << str;
	return 0;
}