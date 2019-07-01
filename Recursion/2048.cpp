#include <iostream>
using namespace std;
char num_str[][10] = {"one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};
void Int2Str(int n){
	if(n == 0){
		return;
	}
	Int2Str(n/10);
	cout << num_str[n%10 - 1];
}
int main(){
	int n;
	cin >> n;
	Int2Str(n);
	return 0;
}