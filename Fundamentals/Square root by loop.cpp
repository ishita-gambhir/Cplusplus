/*
Program to find out the square root of a given number n upto p decimal places using while loop
*/
#include<iostream>
#include<cmath> // for pow()
#include<cstdio> // for printf()
using namespace std;

int main(){
	int p, i = 0;
	float num, ans = 0.0, inc = 0;
	cin >> num >> p;
	while((-i) <= p){
		inc = pow(10, i);
		while((ans * ans) <= num){
			ans += inc;
		}
		ans -= inc;
		i = i - 1;
	}
	cout << ans;
	//printf("%.2f",ans) --> for printing answer upto 2 decimal places even if perfect square
 	return 0;
}