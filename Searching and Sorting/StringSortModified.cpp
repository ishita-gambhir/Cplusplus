/*
Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

Input Format:
N(integer) followed by N strings.

Constraints:
N<=1000

Output Format
N lines each containing one string.

Sample Input
3
bat
apple
batman
Sample Output
apple
batman
bat
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
bool myCompare(string s1, string s2){
	int i = 0;
	while(s1[i] != '\0' && s1[i] != '\0'){
		if(s1[i] < s2[i]){
			return s1[i] < s2[i];
		}
		i++;
	}
	if(s1[i] == '\0'){
		return s2[i] < s1[i];
	}
	return s1[i] < s2[i];
}
int main(){
	int numOfStrings;
	cin >> numOfStrings;
	std::vector<string> str;
	string temp;
	for(int i = 0; i < numOfStrings; i++){
		cin >> temp;
		str.push_back(temp);
	}
	sort(str.begin(), str.end(), myCompare);
	for(int i = 0; i < numOfStrings; i++){
		cout << str[i] << endl;
	}
	return 0;
}