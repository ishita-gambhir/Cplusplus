/*
Take as input N, the size of an integer array. Take one more input, which is a list of N integers separated by a space, and store that in an array. Write a recursive function which prints true if the array is sorted, and false otherwise.

Input Format:
N x y z

Constraints:
1 < N < 1000
-10^9 < i < 10^9, where i is an element of the array

Output Format
true OR false

Sample Input
5
1 2 3 4 5
Sample Output
true
*/
#include <iostream>
using namespace std;
bool isSorted(int* array, int numOfElements){
    if(numOfElements == 1){
        return true;
    }
    return ((array[0] <= array[1]) && isSorted(array + 1, numOfElements - 1));
}
int main(){
    int numOfElements;
    cin >> numOfElements;
    int array[1000];
    for(int i = 0; i < numOfElements; i++){
        cin >> array[i];
    }
    isSorted(array, numOfElements) ? cout << "true" : cout << "false";
    return 0;
}