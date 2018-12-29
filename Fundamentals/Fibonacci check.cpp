/*
Program to check if a number is a part of the fibonacci sequence or not.
*/
#include<iostream>
using namespace std;

int main(){
	int i, a = 0, b = 1, num, flag = 0;
	int c = a + b;
	cin >> num;
	if (num == 0){
		flag = 1;
		i = 1;
	}
	else if (num == 1){
		flag = 1;
		i = 2;
	}
	else{
		i = 2;
		while (num >= c){
			i = i + 1;
			if (num == c){
				flag = 1;
				break;
			}
			a = b;
			b = c;
			c = a + b;
		}
		if(flag == 1){
			cout << "YES, Found at " << i << "th position.";
		}
		else{
			cout << "NO.";
		}
	}

	return 0;
}