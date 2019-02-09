/*
Prateek recently graduated from college. To celebrate, he went to a candy shop and bought all the candies. The total cost was a number upto which there are n prime numbers (starting from 2). Since Prateek wants to minimize his cost, he calls you to help him find the minimum amount that needs to be paid. Being a student of Prateek bhaiya it is now your job to help him out :)

Input Format:
First line contains a single integer denoting the number of test cases T. Next T lines contains a single integer N, denoting the number of primes required.

Constraints:
T <= 10000

It is guaranteed that the answer does not exceed 10^6.

Output Format
Print the minimum cost that needs to be paid.

Sample Input
2
5
1
Sample Output
11
2
*/
#include<iostream>
using namespace std;
int PrimeCheck(int Number){
	int numberOfFactors = 0, index = 0;
	for(index = 2; index < Number; index++){
		if(Number % index == 0){
			numberOfFactors++;
			break;
		}
	}
	if(numberOfFactors == 0)
		return 1;
	else
		return 0;
}
int main(){
	int numberOfPrimeNums = 0, cost = 1, numberOfTestCases = 0, i = 0, counter = 0, isPrime = 0;
	cin >> numberOfTestCases;
	for(i = 0; i < numberOfTestCases; i++){
        counter = 0;
        cost = 1;
		cin >> numberOfPrimeNums;
		while(counter != numberOfPrimeNums){
			isPrime = PrimeCheck(cost);
			if(isPrime == 1)
				counter++;
			cost++;
		}
		cout << --cost;
	}
	return 0;
}
