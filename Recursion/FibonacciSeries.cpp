//print the fibonacci series using recursion
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
	for(int i = 1; i <= n; i++){
		cout << NthFibonacci(i) << " ";
	}
	return 0;
}