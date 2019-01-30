/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
Input Format:
Constraints:
0 < N < 10
*/
#include<iostream>
using namespace std;
int main(){
	int n = 0, i = 0, j = 0;
	cin >> n;
	for(i = 1; i <=n; i++){
		for(j = 1; j <= i; j++){
			cout << j << " ";
		}
		j = 2*n - 2*i -1;
		while (j > 0){
			cout << "  ";
			j--;
		}
		if(i != n){
			for(j = i; j > 0; j--){
				cout << j << " ";
			}
		}
		else{
			for(j = i - 1; j > 0; j--)
				cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}