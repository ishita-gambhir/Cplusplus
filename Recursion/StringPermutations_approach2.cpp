//Permutations
/* given a string s, find all the permutations of that string
eg s = "abc"
permutations : abc acb bac bca cab cba */
#include<iostream>
#include<string>
using namespace std;
//method 2 : swaps elements instead of iterating
void printAllPermutations(string str, string outputStr = ""){
	if(str.length() <= 0){
		outputStr.push_back('\0');
		cout << outputStr << endl;
		return;
	}
	for(int i = 0; str[i] != '\0'; i++){
		swap(str[0], str[i]);
		outputStr.push_back(str[0]);
		string remaining = str;
		remaining.erase(remaining.begin() + 0);
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