//Permutations
/* given a string s, find all the permutations of that string
eg s = "abc"
permutations : abc acb bac bca cab cba */
#include<iostream>
#include<string>
using namespace std;
void printAllPermutations(string str, string outputStr = ""){
	if(str.length() <= 0){
		outputStr.push_back('\0');
		cout << outputStr << endl;
		return;
	}
	for(int i = 0; str[i] != '\0'; i++){
		outputStr.push_back(str[i]);
		string remaining = str;
		remaining.erase(remaining.begin() + i);
		printAllPermutations(remaining, outputStr);
		outputStr.pop_back();
	}
}
int main(){
	string str;
	cin >> str;
	printAllPermutations(str);
	return 0;
}