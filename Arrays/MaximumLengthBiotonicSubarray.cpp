/* You are provided n numbers of array. You need to find the maximum length of
bitonic subarray. A subarray A[i … j] is biotonic if there is a k with i <= k
<= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j]
i.e subarray is first increasing and then decreasing or entirely increasing or
decreasing.

Input Format: First line contains integer t which is number of test case. For
each test case, it contains an integer n which is the size of array and next
line contains n space separated integers.

Constraints:
1<=t<=100 1<=n<=1000000

Output Format
Print the maximum length.

Sample Input
2
6
12 4 78 90 45 23
4
40 30 20 10
Sample Output
5
4
*/
#include<iostream>
#include<vector>
using namespace std;
bool isBiotonic(std::vector<int> array, int start, int end){
	bool inc = true;
	for(int i = start; i < end; i++){
		if(inc){
			if(array[i] > array[i + 1]){
				inc = false;
			}
		}
		else{
			if(array[i] < array[i + 1]){
				return false;
			}
		}
	}
	return true;
}
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		int numOfElements;
		cin >> numOfElements;
		std::vector<int> arr;
		for(int i = 0; i < numOfElements; i++){
			int num;
			cin >> num;
			arr.push_back(num);
		}
		int max_length = 0;
		//make subarrays
		for(int i = 0; i < numOfElements; i++){
			for(int j = 0; j < numOfElements; j++){
				//check if the subarray is biotonic
				if(isBiotonic(arr, i, j)){
					if((j - i + 1)  > max_length){
						max_length = j - i + 1;
					}
				}
			}
		}
		//print max length
		cout << max_length << endl;
	}
	return 0;
}