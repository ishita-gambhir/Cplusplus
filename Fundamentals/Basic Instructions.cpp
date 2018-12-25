/*
 This program contains the 6 fundamental instructions that a computer can follow.
 	1. Reading/ Input
 	2. Writing/ Output
 	3. Arithmetic Operations
 	4. Assignment
 	5. Condtional execution
 	6. Repetiotion [not included here]
*/

#include <iostream>
using namespace std;

int main(){

	//declaration of variables
	int a, b, sum;

	//input
	cin >> a >> b;

	//assignment & arithmetic ops
	sum = (a + b);

	//output
	cout<<"Sum is "<<sum<<". ";
	//conditional operator
	if(sum % 2 == 0){
		cout<<"It is even.";
	}
	else{
		cout<<"It is odd.";
	}

	return 0;
}