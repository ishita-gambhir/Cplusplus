/*
Program to calculate Simple Interest.
*/
#include<iostream>
using namespace std;

int main(){
	int P;
	float R, T, SI;
	cin >> P >> R >> T;
	SI = (P * R * T) / 100;
	cout << SI;
	return 0;
}