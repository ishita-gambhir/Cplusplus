/*
Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

Input Format:
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints:
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 
*/
//Image rotation
#include<iostream>
using namespace std;
int main(){
	int original[1000][1000], rotated[1000][1000];
	int i, j, n;
	cin >> n;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> original[i][j];
		}
	}
	//transpose
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			rotated[j][i] = original[i][j];
		}
	} 
	//mirror image of transpose
	for(j = 0; j < n; j++){
        for(i = 0; i < n/2; i++){
            int temp = rotated[i][j];
            rotated[i][j] = rotated[n - 1 - i][j];
            rotated[n - 1 - i][j] = temp;
        }
    }
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << rotated[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}