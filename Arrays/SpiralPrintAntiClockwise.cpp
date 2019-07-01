/*Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format:
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints:
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END*/
#include<iostream>
using namespace std;
int main(){
	int arr[10][10], M, N;
	cin >> M >> N;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cin >> arr[i][j];
		}
	}
	
	int count = 0, start_row = 0, end_row = M - 1, start_col = 0, end_col = N - 1;
	while(count <= M * N){
		//print start col from start row to end row
		for(int i = start_row; i <= end_row; i++){
			cout << arr[i][start_col] << ", ";
			count++;
		}
		//update start col
		start_col++;
		if(count >= M*N)
			break;
		//print end row from start col to end col
		for(int j = start_col; j <= end_col; j++){
			cout << arr[end_row][j] << ", ";
			count++;
		}
		//update end row
		end_row--;
		if(count >= M*N)
			break;
		//print end col from end row to start row
		for(int i = end_row; i >= start_row; i--){
			cout << arr[i][end_col] << ", ";
			count++;
		}
		//update end col
		end_col--;
		if(count >= M*N)
			break;
		//print start row from end col to start col
		for(int j = end_col; j >= start_col; j--){
			cout << arr[start_row][j] << ", ";
			count++;
		}
		//update start row
		start_row++;
	}

	cout << "END";
	return 0;
}