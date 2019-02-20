/*
Take as input N, a number. Print the pattern as given in output section for corresponding input.

Input Format:
Enter value of N

Constraints:
Output Format
All numbers and stars are Space separated

Sample Input
5
Sample Output
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
	int n = 0, i = 0, j = 0, s = -1;
	cin >> n;
	for(i = n; i > 0; i--){
		for(j = 1; j <= i; j++){
			cout << j << " ";
		}
		for(j = 1; j <= s; j++){
			cout << "* ";
		}
		s += 2;
		cout << endl;
	}
	return 0;
}