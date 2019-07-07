/* Andrew was attempting a mathematics test where he needed to solve problems
with factorials. One such problem had an answer which equaled 100! ,He
wondered what would this number look like. He tried to calculate 100! On his
scientific calculator but failed to get a correct answer. Can you write a code
to help Andrew calculate factorials of such large numbers?

Input Format:
a single lined integer N

Constraints:
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120
*/
#include<iostream>
#include<string>
using namespace std;
int multiply(int *factorial, int num, int fact_size){
	int carry = 0, i;
	for(i = 0; i < fact_size; i++){
		int value = num * factorial[i] + carry;
		factorial[i] = value % 10;
		carry = value / 10;
	}
	while(carry){
		factorial[i] = carry % 10;
		carry /= 10;
		i++;
		fact_size++;
	}
	return fact_size;
}
int main(){
	int number;
	cin >> number;
	int factorial[1200] = {0}; //1135 digits in fact of 500
	factorial[0] = 1;
	int fact_size = 1;
	for(int i = 1; i <= number; i++){
		fact_size = multiply(factorial, i, fact_size);
	}
	for(int i = fact_size - 1; i >= 0; i--){
		cout << factorial[i];
	}
	return 0;
}