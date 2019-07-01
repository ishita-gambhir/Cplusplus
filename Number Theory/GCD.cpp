#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	return gcd(b, a%b);
}
int main(){
	int num1, num2;
	cin >> num1 >> num2;
	cout << "gcd = " << gcd(num1, num2);
	cout << "\nlcm = " << (num1 * num2) / gcd(num1, num2);
	return 0;
}