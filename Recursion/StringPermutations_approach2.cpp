//Permutations
/* given a string s, find all the permutations of that string
eg s = "abc"
permutations : abc acb bac bca cab cba */
#include<iostream>
#include<string>
using namespace std;
//method 2 : swaps elements instead of iterating
void printAllPermutations(string str, int index = 0, string outputStr = ""){
	if(index == str.length()){
		outputStr.push_back('\0');
		cout << outputStr << endl;
		return;
	}
	for(int i = index; str[i] != '\0'; i++){
		swap(str[0], str[i]);
		outputStr.push_back(str[0]);
		printAllPermutations(str, index + 1, outputStr);
		outputStr.pop_back();
	}
}
int main(){
	string str;
	cin >> str;
	printAllPermutations(str);
	return 0;
}