/*
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format:
Single integer N.

Constraints:
N <= 20

Output Format
Print pattern.

Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****
*/
#include<iostream>
using namespace std;
int main(){
	int n = 0, i = 1, j = 0, s1 = 0, s2 = 0;
	cin >> n;
	s1 = n - 1;
	s2 = n - 2;
	while(i <= n){
		for(j = 1; j <= s1; j++){
			cout << " ";
		}
		if(i == 1 || i == n){
			for( j = 1; j <= n; j++){
				cout << "*";
			}
		}
		else{
			cout << "*";
			for(j = 1; j <= s2; j++){
				cout << " ";
			}
			cout << "*";
		}
		cout << endl;
		s1--;
		i++;
	}
	return 0;
}