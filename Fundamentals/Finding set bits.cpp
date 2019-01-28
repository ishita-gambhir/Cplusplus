/*
Given a number n, to find the number of set bits in it using bitwise operators.
(Set bits are the number of 1s in a number's binary representation.)
*/
#include<iostream>
using namespace std;
int main(){
	int n, ans = 0;
	cin >> n;
	while(n != 0){
		ans = ans + (n & 1);
		n = n >> 1;
	}
	cout << ans;
	return 0;
}
