#include<iostream>
using namespace std;
int main(){
	int numOfElements, arr[100000];
	int uniqueNum = 0;
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> arr[i];
		uniqueNum = uniqueNum ^ arr[i];
	}
	cout << uniqueNum;
	return 0;
}