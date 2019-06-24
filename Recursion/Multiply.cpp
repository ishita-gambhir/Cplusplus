//multiply 2 nums withouts using *
#include <iostream>
using namespace std;
int aXb(int a, int b){
	if(b == 1){
		return a;
	}
	return a + aXb(a, b-1);
}
int main(){
	int a, b;
	cin >> a >> b;
	cout << aXb(a, b);
	return 0;
}