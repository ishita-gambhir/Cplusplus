/*
Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format:
Enter a number N , add N more numbers

Constraints:
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true
*/
/*Palindrom*/
#include<iostream>
using namespace std;
bool isPalindrome(int* array, int first, int last){
	if(first >= last){
		return true;
	}
	if(array[first] == array[last] && isPalindrome(array, first + 1, last - 1)){
		return true;
	}
	return false;
}
int main(){
	int numOfElements;
	cin >> numOfElements;
	int array[100];
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	isPalindrome(array, 0, numOfElements - 1) ? cout << "true" : cout << "false";
	return 0;
}