/*
Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format:
Constraints:
0 < N < 10
*/
#include<iostream>
using namespace std;
int main(){
	int n = 0, i = 0, j = 0, k = 0;
	cin >> n;
	for(i = 1; i <= n; i++){
		for(j = (n - i); j > 0; j--){
			cout << "  ";
		}
		k = i;
		for(j = 1; j <= i; j++){
			cout << k << " ";
			k++;
		}
		k -= 2;
		for(j = 1; j < i; j++){
			cout << k << " ";
			k--;
		}
		cout << endl;
	}
	return 0;
}