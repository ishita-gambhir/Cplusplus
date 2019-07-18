/*
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.


Input Format:
First line contains a single integer N, denoting the number of bars in th histogram. Next line contains N integers, ith of which, denotes the height of ith bar in the histogram.

Constraints:
1<=N<=10^6 Height of each bar in histogram <= 10^9

Output Format
Output a single integer denoting the area of the required rectangle.

Sample Input
5
1 2 3 4 5
Sample Output
9
*/
//o(n^2) time complexity -ans not accepted --wrong answer
#include <iostream>
using namespace std;
int main(){
	int numOfBars;
	cin >> numOfBars;
	int histogram[1000000];
	for(int i = 0; i < numOfBars; i++){
		cin >> histogram[i];
	}
	int l_min, r_min, area[1000000];
	for(int i = 0; i < numOfBars; i++){
		l_min = -1;
		//search for l_min
		for(int j = i -1; j >= 0; j--){
			if(histogram[j] < histogram[i]){
				l_min = j;
				break;
			}
		}

		r_min = numOfBars;
		//search for r_min
		for(int j = i + 1; j < numOfBars; j++){
			if(histogram[j] < histogram[i]){
				r_min = j;
				break;
			}
		}
		area[i] = histogram[i] * (r_min - l_min - 1);
	}
	int max_area = 0;
	for(int i = 0; i < numOfBars; i++){
		max_area = max(max_area, area[i]);
	}
	cout << max_area;
	return 0;
}