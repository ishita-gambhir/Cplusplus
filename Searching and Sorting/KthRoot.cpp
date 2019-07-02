/*
You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

Input Format:
First line contains number of test cases, T. Next T lines contains integers, n and k.

Constraints:
1<=T<=10 1<=N<=10^15 1<=K<=10^4

Output Format
Output the integer x

Sample Input
2
10000 1
1000000000000000 10
Sample Output
10000
31
*/
#include<iostream>
#include<cmath>
using namespace std;
long int greatestInt(long int num, int power){
	long int start = 1, end = num, mid, base = 1;
	while(start <= end){
		mid = (start + end) / 2;
		if(pow(mid, power) <= num){
			base = mid;
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return base;
}
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		long int num;
		cin >> num;
		int power;
		cin >> power;
		cout << greatestInt(num, power) << endl;		
	}
	return 0;
}