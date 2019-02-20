/*
Take as input a two-d array. Wave print it column-wise.

Input Format:
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints:
Both M and N are between 1 to 10.

Output Format
All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
*/
#include<iostream>
using namespace std;
int main(){
	int array[10][10], M = 0, N = 0, i = 0, j = 0, flip = 0;
	cin >> M >> N;
	for(i = 0; i < M; i++){
		for(j = 0; j < N; j++){
			cin >> array[i][j];
		}
	}
	for(j = 0; j < N; j++){
		//inc
		if(flip == 0){
			for(i = 0; i < M; i++){
				cout << array[i][j] << ", ";
			}
			flip = 1;
		}
		//dec
		else{
			for(i = M - 1; i >= 0; i--){
				cout << array[i][j] << ", ";
			}
			flip = 0;
		}
	}
	cout << "END";
	return 0;
}