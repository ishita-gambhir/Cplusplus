//Given a brick wall of 4xN, ans tiles of 4x1, you have to find the total number of ways to arrange tiles on the wall.
#include <iostream>
using namespace std;
int numOfWays(int n){
	if(n <= 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	if(n == 4){
		return 2;
	}
	return numOfWays(n-1) + numOfWays(n-4);
}
int main(){
	int n;
	cin >> n;
	cout << numOfWays(n);
}