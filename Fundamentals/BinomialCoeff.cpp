/*
To demonstrate the working of a call stack with the help of a program that calculates nCr
*/
#include<iostream>
using namespace std; 
int factorial(int num){
	int fact = 1;
	for(int i = 1; i <= num; i++){
		fact *= i;
	}
	return fact;
}
int nCr(int n, int r){
	int ncr, nfact, rfact, nrfact;
	nfact = factorial(n);
	rfact = factorial(r);
	nrfact = factorial(n - r);
	ncr = nfact / (rfact * nrfact);
	return ncr;
}
int main(){
	int n, r;
	cin >> n >> r;
	cout << nCr(n, r);
	return 0;
}