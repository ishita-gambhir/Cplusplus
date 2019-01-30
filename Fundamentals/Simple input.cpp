/*
Given a list of numbers, stop processing input after cummulative sum of all the input becomes negative.

Input Format:
A list of integers

Constraints:
All numbers input are integers between -1000 and 1000.

Output Format
All the numbers before the cummulative sum become zero in a new line.

Sample Input
1
2
88
-100
49
Sample Output
1
2
88
*/
#include<iostream>
using namespace std;
int main(){
	int num, sum = 0;
	while(sum >= 0){
		cin >> num;
		sum += num;
		if(sum >= 0){
			cout << num << endl;
		}
	}
	return 0;
}
