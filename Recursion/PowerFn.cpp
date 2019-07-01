//given two numbers, a and b, compute a^b efficiently
#include <iostream>
using namespace std;
int fastPowFn(int a, int b){
	if(b == 0){
		return 1;
	}
	return (b & 1) ? a * fastPowFn(a, b/2) * fastPowFn(a, b/2) : fastPowFn(a, b/2) * fastPowFn(a, b/2);
}
int powFn(int a, int b){
	if(b == 0){
		return 1;
	}
	return a * powFn(a, b-1);
}
int main(){
	int a, b;
	cin >> a >> b;
	//cout << powFn(a, b);
	cout << fastPowFn(a, b);
	return 0;
}