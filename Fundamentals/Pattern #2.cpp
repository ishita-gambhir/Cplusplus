/*
1
2 3
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;

int main(){
	int n, i, j, num = 1;
	cin >> n;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	return 0;
}