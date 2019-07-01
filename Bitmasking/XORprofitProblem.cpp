#include<iostream>
using namespace std;
int main(){
	int x, y, a, b;
	cin >> x >> y;
	int maxXOR = 0;
	for(int i = x; i <= y; i++){
		for(int j = i + 1; j <= y; j++){
			if(i ^ j >= maxXOR){
				maxXOR = i ^ j;
				a = i;
				b = j;
			}
		}
	}
	cout << maxXOR;
	return 0;
}