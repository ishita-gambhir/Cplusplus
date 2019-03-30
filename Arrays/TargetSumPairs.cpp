/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format:
Constraints:
Length of the arrays should be between 1 and 1000.

Output Format
Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3

approach:
sort the array
make another array with values 1 or 0 indicating whether the values has been used or not
check for target pairs[start the initial loop from behind, which will check for all values starting from 0 to n - 1// that number?(if available)]
change value in other array accordingly, and print simultaneously.
*/
#include<iostream>
#include<algorithm>
using namespace std;

void printTargetSumPairs(int target, int array[1000], int sizeOfArray){
	int elementCondition[1000] = {0}, i, j;
	//elementCondition = {0};
	for(i = 0; i < sizeOfArray; i++){
		for(j = sizeOfArray - 1; j >= 0; j--){
			if(elementCondition[i] == 0 && elementCondition[j] == 0){
				if(array[i] + array[j] == target){
					elementCondition[i] = 1;
					elementCondition[j] = 1;
					cout << (i > j ? (array[j]) : (array[i]));
					cout << " and ";
					cout << (i > j ? (array[i]) : (array[j]));
					cout << endl;
				}
			}
		}
	}
}
int main(){
	int sizeOfArray, array[1000], target;
	//input values
	cin >> sizeOfArray;
	for(int i = 0; i < sizeOfArray; i++){
		cin >> array[i];
	}
	cin >> target;
	sort(array, array + sizeOfArray);
	printTargetSumPairs(target, array, sizeOfArray);
	return 0;
}