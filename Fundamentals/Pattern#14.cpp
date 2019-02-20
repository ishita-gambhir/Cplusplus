/*
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format:
Constraints:
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *

     for n = 7
     * * * * * * *
     * * *   * * *
     * *       * *
	 *           *
	 * *       * *
	 * * *   * * *
	 * * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
	int n = 0, i = 1, j = 0, s = 2, x = 0;
	cin >> n;
	for(i = 1; i <= n; i++){
		cout << "* ";
	}
	cout << endl;

	x = n/2;
	i = 2;
	while(i <= n/2 + 1){
		for(j = 1; j <= x; j++){
			cout << "* ";
		}
		for(j = 1; j <= s; j++){
			cout << " ";
		}
		for(j = 1; j <= x; j++){
			cout << "* ";
		}
		cout << endl;
		s += 4;
		x -= 1;
		i += 1;
	}

	s -= 8;
	x += 2;
	while(i < n){
		for(j = 1; j <= x; j++){
			cout << "* "; 
		}
		for(j = 1; j <= s; j++){
			cout << " ";
		}
		for(j = 1; j <= x; j++){
			cout << "* ";
		}
		cout << endl;
		s -= 4;
		x += 1;
		i++;
	}
	for(i = 1; i <= n; i++){
		cout << "* ";
	}
	cout << endl;
	return 0;
}