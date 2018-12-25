/*
Basic method to check if a number is prime or not
*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 2, flag = 0;
	while (i <= n-1){
		if (n % i == 0){
			flag = 1;
			break;
		}
		i = i + 1;
	}
	if (flag == 0){
		cout << "Prime";
	}
	else{
		cout << "Primen't";
	}
	return 0;
}