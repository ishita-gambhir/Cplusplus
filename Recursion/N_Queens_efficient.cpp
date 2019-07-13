#include<iostream>
#include<bitset>
using namespace std;
bitset<25> column, diag1, diag2;
void printNumOfWays(int n, int &count, int row = 0){
	if(row == n){
		count++;
		return;
	}
	for(int j = 0; j < n; j++){
		if(!column[j] && !diag1[abs(row - j + n - 1)] && !diag2[row + j]){
			column[j] = diag1[abs(row - j + n - 1)] = diag2[row + j] = 1;
			printNumOfWays(n, count, row + 1);
			column[j] = diag1[abs(row - j + n - 1)] = diag2[row + j] = 0;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int count = 0;
	printNumOfWays(n, count);
	cout << count;
	return 0;
}