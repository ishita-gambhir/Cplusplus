/*
Given a n*n chess-board, we need to place n queens such that all the queens are safe.
A queen can attack horizontally, vertically and diagonally
*/
#include<iostream>
using namespace std;
bool isValidPos(bool board[][10], int n, int row, int col){
	//tells if row, col is safe
    int i, j;
	//vertical
    i = row - 1;
    while(i >= 0){
        if(board[i][col] == 1){
            return false;
        }
        i--;
    }
	//upper left diagonal
    i = row - 1;
    j = col - 1;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }
    //upper right diagonal
    i = row - 1;
    j = col + 1;
    while(i >= 0 && j < n){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j++;
    }
	return true;
}
bool printConfig(bool board[][10], int n, int &count, int row = 0){
	//base case
	if(row == n){
		//print the config
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				board[i][j] ? cout << "Q" : cout << "_";
			}
			cout << endl;
		}
		cout << endl;
		//update count
		count++;
		return false; //keep on searching for more valid config
	}
	for(int j = 0; j < n; j++){
		if(isValidPos(board, n, row, j)){
			board[row][j] = 1;
			bool validConfig = printConfig(board, n, count, row + 1);
			if(validConfig){		// needed only if we want only 1 case and are returning true in base case
				return true;		//but base case will always return false, and we need all cases, so no need for this
			}
			board[row][j] = 0;	//backtrack
		}
	}
	return false; // were unable to put anything in the curr row
}
int main(){
	int n;
	cin >> n;
	bool board[10][10] = {0};
	int count = 0;
	printConfig(board, n, count);
	cout << count;
	return 0;
}