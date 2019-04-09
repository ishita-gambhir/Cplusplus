#include<iostream>
#include<cmath>
using namespace std;
float sqRoot(float num, int precision){
	int lower, upper, mid, i, j;
	float increment;
	float ans;
	lower = 0;
	upper = num;
	//for int part
	while(lower <= upper){
		mid = (lower + upper) / 2;
		if(mid * mid == num){
			ans = mid;
			return ans;
			break;
		}
		else if(mid * mid < num){
			ans = mid;
			lower = mid + 1;
		}
		else{
			upper = mid - 1;
		}
	}
	for(i = 1; i <= precision; i++){
		increment = pow(10, -i);
		while(ans * ans <= num){
			ans += increment;
		}
		ans -= increment;
	}
	return ans;
}
int main(){
	float num, ans;
	int precision;
	cin >> num;
	cin >> precision;
	ans = sqRoot(num, precision);
	cout << ans;
	return 0;
}