/*
Take the following as input.

A number (N)
Take N more numerical inputs
The N inputs for a sequence S = s1, s2, .., sN. Compute if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format:
Constraints:
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true
*/
#include<iostream>
using namespace std;

int main(){
	int numberOfTerms, sequence[1000], flag = -1;
	cin >> numberOfTerms;
	for(int i = 0; i < numberOfTerms; i++){
		cin >> sequence[i];
	}
	for(int i = 0; i < numberOfTerms - 1; i++){
		if(flag == -1){
			if(sequence[i] > sequence[i + 1])
				continue;
			flag = 1;
		}
		else if(flag == 1){
			if(sequence[i] < sequence[i + 1])
				continue;
			flag = 0;
			break;
		}
	}
	if(flag){
		cout << "true";
	}
	else{
		cout << "false";
	}
	return 0;
}