/* Take as input N, the size of array. Take N more inputs and store that in an
array. Take as input M, the size of second array and take M more inputs and
store that in second array. Write a function that returns the sum of two
arrays. Print the value returned.

Input Format:
Constraints:
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END
*/
#include<iostream>
using namespace std;
int main(){
	int len1;
	cin >> len1;
	int arr1[1005] = {0};
	for(int i = len1 - 1; i >= 0; i--){
		cin >> arr1[i];
	}
	int len2;
	cin >> len2;
	int arr2[1005] = {0};
	for(int i = len2 - 1; i >= 0; i--){
		cin >> arr2[i];
	}
	int ans[1005] = {0}, carry = 0, ans_size = 0;
	for(int i = 0; i < len1 || i < len2; i++){
		ans[i] = (carry + arr1[i] + arr2[i]) % 10;
		carry = (arr1[i] + arr2[i]) / 10;
		ans_size++;
	}
	while(carry){
		ans[ans_size] = carry % 10;
		carry /= 10;
		ans_size++;
	}
	for(int i = ans_size - 1; i >= 0; i--){
		cout << ans[i] << ", ";
	}
	cout << "END";
	return 0;
}