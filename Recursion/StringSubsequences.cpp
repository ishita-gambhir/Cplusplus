/*
Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function). 
Note: Use cin for input

Input Format:
Enter a string

Constraints:
None

Output Format
Display the total no. of subsequences and also print all the subsequences in a space separated manner

Sample Input
abcd
Sample Output
 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
16
*/

//generate subsequences in a string
#include<iostream>
#include<string>
using namespace std;
void generate_substring(char* s_input, char* s_output, int i, int j){
	//base case
	if(s_input[i] == '\0'){
		s_output[j] = '\0';
		cout << s_output << " ";
		return;
	}
	//rec case
	//2. exclude s_out[i]
	generate_substring(s_input, s_output, i + 1, j);
	//1. include s_in[i]
	s_output[j] = s_input[i];
	generate_substring(s_input, s_output, i + 1, j + 1);
}
int main(){
	char s_input[100], s_output[100];
	cin >> s_input;
	generate_substring(s_input, s_output, 0, 0);
	int i;
	for(i = 0; s_input[i] != '\0'; i++){

	}
	cout << endl << (1 << i);
	return 0;
}