/*You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or
empty. The rat can move from position (i,j), down or right on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M). Find
the rightmost path through which, rat can reach this position. A path is
rightmost, if the rat is at position (i,j), it will always move to (i,j+1), if
there exists a path from (i,j+1) to (N,M).

Input Format: First line contains 2 integers, N and M, denoting the rows and
columns in the grid. Next N line contains. M characters each. An 'X' in
position (i,j) denotes that the cell is blocked and ans 'O' denotes that the
cell is empty.

Constraints:
1<=N,M<=1000 GRID(i,j)='X' or 'O'

Output Format If a solution exists: Print N lines, containing M integers each.
A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path
and a 0 denotes that the cell is not covered in the path. If solution doesn't
exist, just print "-1".

Sample Input
5 4
OXOO
OOOX
OOXO
XOOO
XXOO
Sample Output
1 0 0 0 
1 1 0 0 
0 1 0 0 
0 1 1 1 
0 0 0 1 
*/
#include<iostream>
using namespace std;
bool solveMaze(char maze[1000][1000], bool soln[1000][1000], int rows, int columns, int i = 0, int j = 0){
	//base case
	if(i == rows - 1 && j == columns - 1){
		soln[i][j] = 1;
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	//rec case
	if(maze[i][j] == 'O'){
		soln[i][j] = 1;
		//go right
		if(j < columns - 1){
			bool isSolved = solveMaze(maze, soln, rows, columns, i, j + 1);
			if(isSolved){
				return true;
			}
		}
		//go down if right failed
		if(i < rows - 1){
			bool isSolved = solveMaze(maze, soln, rows, columns, i + 1, j);
			if(isSolved){
				return true;
			}
		}
	}
	//backtrack
	soln[i][j] = 0;
	return false;
}
int main(){
	int rows, columns;
	cin >> rows >> columns;
	char maze[1000][1000];
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cin >> maze[i][j];
		}
	}
	bool soln[1000][1000] = {0};
	bool isSolved = solveMaze(maze, soln, rows, columns);
	if(!isSolved){
		cout << "-1";
	}
	return 0;
}