#include<iostream>
using namespace std;
void CountingSort(int numOfElements, int array[10000]){
	int frequency[1000] = {0}, i, j, k;
	for(i = 0; i < numOfElements; i++){
		frequency[array[i]] += 1;
	}
	i = 0, k = 0;	
	while(i < numOfElements){
		for(j = 1; j <= frequency[i]; j++){
			array[k] = i;
			k++;
		}
		i++;
	}
}
int main(){
	int numOfElements, array[10000];
	cin >> numOfElements;
	for(int i = 0; i < numOfElements; i++){
		cin >> array[i];
	}
	CountingSort(numOfElements, array);
	for(int i = 0; i < numOfElements; i++){
		cout << array[i] << endl;
	}
	return 0;
}