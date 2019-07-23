/* The stock span problem is a financial problem where we have a series of N
daily price quotes for a stock and we need to calculate span of stock’s price
for all N days. You are given an array of length N, where ith element of array
denotes the price of a stock on ith. Find the span of stock's price on ith
day, for every 1<=i<=N. A span of a stock's price on a given day, i, is the
maximum number of consecutive days before the (i+1)th day, for which stock's
price on these days is less than or equal to that on the ith day.

Input Format:
Enter the size of the array N and add N more numbers and store in the array.

Constraints:
None

Output Format
Display the array containing stock span values.

Sample Input
5
30
35
40
38
35
Sample Output
1 2 3 1 1 END
*/
#include<iostream>
#include<stack>
using namespace std;
void printStockSpan(int* stock, int numOfStocks, int* stockSpan){
	stack<int> prevHighestVal;
	for(int i = 0; i < numOfStocks; i++){
		while(!prevHighestVal.empty() && stock[prevHighestVal.top()] < stock[i]){
			prevHighestVal.pop();
		}
		stockSpan[i] = prevHighestVal.empty() ? i + 1 : (i - prevHighestVal.top());
		prevHighestVal.push(i);
	}
	for(int i = 0; i < numOfStocks; i++){
		cout << stockSpan[i] << " ";
	}
	cout << "END";
}
void stockSpanAlt(int* arr, int numOfStocks){
	stack<int> s;
	int ans[100];
	for(int day = 0; day < numOfStocks; ++day){
		int curPrice = arr[day];
		while(s.empty() == false && arr[s.top()] < curPrice){
			s.pop();
		}
		int betterDay = s.empty() ? 0 : s.top();
		int span = day - betterDay;
		ans[day] = span;
		s.push(day);
	}
	for(int i = 0; i < numOfStocks; i++){
		cout << ans[i] << " ";
	}
}
int main(){
	int numOfStocks;
	cin >> numOfStocks;
	int stock[100];
	for(int i = 0; i < numOfStocks; i++){
		cin >> stock[i];
	}
	int stockSpan[100];
	printStockSpan(stock, numOfStocks, stockSpan);
	//stockSpanAlt(stock, numOfStocks);
	return 0;
}