/*
Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

Input Format:
First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

Constraints:
1 <= N,M <= 30 0 <= A[i] <= 100

Output Format
Print 1 if the element is present in the matrix, else 0.

Sample Input
3 3
3 30 38
44 52 54
57 60 69
62
Sample Output
0
*/
//searching in a 2D array where the rows and columns are in ascending order
#include<iostream>
using namespace std;
int main(){
	int arr[10][10], m, n, key, x = -1, y = -1, i , j;
	cin >> m >> n;
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	cin >> key;
	i = 0;
	j = n - 1;
	while(i >= 0 && j >= 0 && i < m && j < n){
		if(key == arr[i][j]){
			x = i;
			y = j;
			break;
		}
		else if(key < arr[i][j])
			j--;
		else
			i++;
	}
	if(x != -1 && y != -1)
		cout << 1;
	else
		cout << 0;
	return 0;
}