//find the nth number in the fobonacci series using recursion
#include <iostream>
using namespace std;
int NthFibonacci(int n){
	if(n == 1 || n == 2){
		return n - 1;
	}
	return NthFibonacci(n-1) + NthFibonacci(n-2);
}
int main(){
	int n;
	cin >> n;
	cout << NthFibonacci(n);
	return 0;
}
