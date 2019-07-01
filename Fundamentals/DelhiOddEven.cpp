/*
Due to growing Traffic Problem Kejriwal wants to devise a new scheme. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?

Input Format:
The first line contains N , then N integers follow each denoting the number of the car.

Constraints:
N<=1000 Car No >=0 && Car No <=1000000000

Output Format
N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !

Sample Input
2
12345
12134
Sample Output
Yes
No
*/
#include<iostream>
using namespace std;

int sumOdd(int number){
	int sumDigits = 0;
	while(number > 0){
		if((number % 10) % 2 != 0)
			sumDigits += number % 10;
		number /= 10;
	}
	return sumDigits;
}
int sumEven(int number){
	int sumDigits = 0;
	while(number > 0){
		if((number % 10) % 2 == 0)
			sumDigits += number % 10;
		number /= 10;
	}
	return sumDigits;
}
void carCheck(int carNumber){
	if(sumEven(carNumber) % 4 == 0 || sumOdd(carNumber) % 3 == 0){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
}
int main(){
	int numberOfTestCases;
	cin >> numberOfTestCases;
	for(int i = 0; i < numberOfTestCases; i++){
		int carNumber;
		cin >> carNumber;
		carCheck(carNumber);
	}
	return 0;
}