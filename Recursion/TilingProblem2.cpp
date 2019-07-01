/*
Given a floor of size n x m. Find the number of ways to tile the floor with tiles of size 1 x m .

Input Format:
First line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first line of each test case contains two integers N and M.

Constraints:
1 <= T<= 1000 1 <= N,M <= 100000

Output Format
Print answer for every test case in a new line modulo 10^9+7.

Sample Input
2
2 3
4 4
Sample Output
1
2
*/
#include <iostream>
using namespace std;
int numOfWays(int n, int m){
	if(n <= 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	if(n == m){
		return 2;
	}
	return numOfWays(n-1, m) + numOfWays(n-m, m);
}
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		int n, m;
		cin >> n >> m;
		cout << numOfWays(n, m) %  1000000007 << endl;
	}
}