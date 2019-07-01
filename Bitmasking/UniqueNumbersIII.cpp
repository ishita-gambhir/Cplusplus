#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int arr[100] = {0}, numOfElements, num;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> num;
		int index = 0;
		while(num){
			arr[index] += num % 2;
			num /= 2;
			index++;
		}
	}
	for(int i = 0; i < 100; i++){
		arr[i] = arr[i] % 3;
	}
	int uniqueNum = 0;
	for(int i = 0; i < 100; i++){
		uniqueNum += arr[i] * pow(2, i);
	}
	cout << uniqueNum;
	return 0;
}