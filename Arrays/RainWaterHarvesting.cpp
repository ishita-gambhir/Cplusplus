/*
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format:
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints:
Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input
10
0 2 1 3 0 1 2 1 2 1
Sample Output
5
*/
#include<iostream>
using namespace std;
int main(){
	int buildings[100];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> buildings[i];
	}
	int leftmax[100], rightmax[100];
	for(int i = 0; i < n; i++){
		//cout << endl << i;
		int max = 0, m_index = -1;
		for(int j = i; j < n; j++){
			if(buildings[j] >= max){
				max = buildings[j];
				m_index = j;
			}
		}
		rightmax[i] = buildings[m_index];
		//cout << " r: " << rightmax[i];
		max = 0;
		m_index = -1;
		for(int j = 0; j <= i; j++){
			if(buildings[j] >= max){
				max = buildings[j];
				m_index = j;
			}
		}
		leftmax[i] = buildings[m_index];
		// cout << " l: " << leftmax[i];
	} 
	int rainwater = 0;
	for(int i = 0; i < n; i++){
		rainwater += min(leftmax[i], rightmax[i]) - buildings[i];
	}
	cout << rainwater;
	return 0;
}