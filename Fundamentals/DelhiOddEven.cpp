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
int sum(int number){
	int sumOfNumDig = 0;
	while(number > 0){
		sumOfNumDig += (number % 10);
		number /= 10;
	}
	return sumOfNumDig;
}
void carCheck(int carNumber){
	int sumOfDigits = 0;
	sumOfDigits = sum(carNumber);
	if(sumOfDigits % 2 == 0){
		if(sumOfDigits % 4 == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else{
		if(sumOfDigits % 3 == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
int main(){
	int carNumber = 0, numberOfTestCases = 0;
	cin >> numberOfTestCases;
	for(int i = 0; i < numberOfTestCases; i++){
		cin >> carNumber;
		carCheck(carNumber);
	}
	return 0;
}