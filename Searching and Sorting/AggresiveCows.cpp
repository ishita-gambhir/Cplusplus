/* Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls.
The stalls are located along a straight line at positions x1,…,xN (0 <= xi <=
1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive
towards each other once put into a stall. To prevent the cows from hurting
each other, FJ wants to assign the cows to the stalls, such that the minimum
distance between any two of them is as large as possible. What is the largest
minimum distance?

Input Format: First line contains N and C, separated by a single space,
representing the total number of stalls and number of cows respectively. The
next line contains N integers containing the indexes of stalls.

Constraints:
Output Format
Print one integer: the largest minimum distance.

Sample Input
5 3
1 2 8 4 9
Sample Output
3
*/
#include<iostream>
#include<algorithm>
using namespace std;
bool isValid(int numOfStalls, int* stallsPosition, int numOfCows, int minDist){
	int count = 1, prevCow = 0; //assuming that one cow is always placed at the first stall
	for(int i = 1; i < numOfStalls && count <= numOfCows; i++){
		if(stallsPosition[i] - stallsPosition[prevCow] >= minDist){
			count++;
            prevCow = i;
		}
	}
	if(count == numOfCows){
		return true;
	}
	return false;
}
int main(){
	int numOfStalls, numOfCows;
	cin >> numOfStalls >> numOfCows;
	int stallsPosition[100000];
	for(int i = 0; i < numOfStalls; i++){
		cin >> stallsPosition[i];
	}
	sort(stallsPosition, stallsPosition + numOfStalls);
	int start = stallsPosition[0], end = stallsPosition[numOfStalls - 1];
	int largestMinDist = 0;
	while(start <= end){
		int mid = (start + end) / 2;
		if(isValid(numOfStalls, stallsPosition, numOfCows, mid)){
			largestMinDist = mid;
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	cout << largestMinDist;
	return 0;
}