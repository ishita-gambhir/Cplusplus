/*
Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".

Input Format:
A single integer N

Constraints:
N <= 10^9

Output Format
Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.

Sample Input
3
Sample Output
4 5
*/
#include<iostream>
using namespace std;
int main(){
	long long int N, a, h;
	cin >> N;
	if(N % 2 == 0){
		a = ((N * N) / 4) - 1;
		h = ((N * N) / 4) + 1;
	}
	else{
		a = ((N * N) - 1) / 2;
		h = ((N * N) + 1) / 2;
	}
	if(h * h == (a * a) + (N * N) && (N + a) > h && (a + h) > N && (N + h) > a)
		cout << a << " " << h;
	else
		cout << "-1";
}