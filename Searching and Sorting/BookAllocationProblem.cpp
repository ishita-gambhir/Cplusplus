/*
You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

Input Format:
First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

Constraints:
1 < t < 50 1< n < 100 1< m <= 50

Output Format
Print the maximum number of pages assigned to students. (see input and output format)

Sample Input
1
4 2
12 34 67 90
Sample Output
113 
*/
#include<iostream>
using namespace std;
bool isValidConfig(int *numOfPages, int numOfBooks, int numOfStudents, int curr_ans){
	//checks if curr_ans is valid
	int students = 1;
	int curr_pages = 0;
	for(int i = 0; i < numOfBooks; i++){
		if(curr_pages + numOfPages[i] > curr_ans){
			curr_pages = numOfPages[i];
			students++;
			if(students > numOfStudents){
				return false;
			}
		}
		else{
			curr_pages += numOfPages[i];
		}
	}
	return true;
}
int BinarySearchOnBooks(int *numOfPages, int numOfBooks, int numOfStudents){
	int total_pages = 0;
	int start, end;
	for(int i = 0; i < numOfBooks; i++){
		total_pages += numOfPages[i];
		//start = max(start, numOfPages[i]);
	}
	start = numOfPages[numOfBooks - 1];
	end = total_pages;
	int finalAns = start;
	while(start <= end){
		int mid = (start + end) / 2;
		if(isValidConfig(numOfPages, numOfBooks, numOfStudents, mid)){
			//search in left part
			finalAns = mid;
			end = mid - 1;
		}
		else{
			//search in right part
			start = mid + 1;
		}
	}
	return finalAns;
}
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		int numOfBooks, numOfStudents;
		cin >> numOfBooks >> numOfStudents;
		int numOfPages[100005];
		for(int i = 0; i < numOfBooks; i++){
			cin >> numOfPages[i];
		}
		cout << BinarySearchOnBooks(numOfPages, numOfBooks, numOfStudents) << endl;
	}
	return 0;
}