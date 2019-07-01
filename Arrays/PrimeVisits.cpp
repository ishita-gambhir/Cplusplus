/*
PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can't visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.

Input Format:
The first line contains N , no of test cases. The next lines contain two integers a and b denoting the range of country numbers.

Constraints:
a<=1000000 & b<=1000000. N<=1000

Output Format
Output contains N lines each containing an answer for the test case.

Sample Input
2
1 10
11 20
Sample Output
4
4
*/
#include<iostream>
using namespace std;
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		long int a, b;
		cin >> a >> b;
		int prime[1000000] = {0};
        prime[0] = prime[1] = 1;
		for(int i = 2; i*i <= b; i++){
			if(prime[i] == 0){
				for(int j = i*i; j <= b; j += i){
					prime[j] = 1;
				}
			}
		}
		int count = 0;
		for(int i = a; i <=b; i++){
			if(prime[i] == 0){
                //cout << i << " ";
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}