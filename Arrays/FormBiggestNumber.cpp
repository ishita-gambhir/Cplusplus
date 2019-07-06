/*
You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

Input Format: First line contains integer t which is number of test case. For
each test case, it contains an integer n which is the size of array A[] and
next line contains n space separated integers A[i] .

Constraints:
1<=t<=100 1<=m<=100 1<=A[i]<=10^5

Output Format
Print the largest value.

Sample Input
1
4
54 546 548 60
Sample Output
6054854654
*/

/// TUTORIAL FROM CB || C++ SOLUTION PROVIDED AFTER MY SOLUTION

/* A simple solution that comes to our mind is to sort all numbers in
descending order, but simply sorting doesn’t work. For example, 548 is greater
than 60, but in output 60 comes before 548. As a second example, 98 is greater
than 9, but 9 comes before 98 in output.

So how do we go about it? The idea is to use any comparison based sorting
algorithm. In the used sorting algorithm, instead of using the default
comparison, write a comparison function myCompare() and use it to sort
numbers. Given two numbers X and Y, how should myCompare() decide which number
to put first – we compare two numbers XY (Y appended at the end of X) and YX
(X appended at the end of Y). If XY is larger, then X should come before Y in
output, else Y should come before. For example, let X and Y be 542 and 60. To
compare X and Y, we compare 54260 and 60542. Since 60542 is greater than
54260, we put Y first. */
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool myCompare(string s1, string s2){
	string s1s2;
	s1s2 = s1.append(s2);
	string s2s1;
	s2s1 = s2.append(s1);
	return s1s2 > s2s1;
}
int main(){
	int testCases;
	cin >> testCases;
	while(testCases--){
		int numOfStrings;
		cin >> numOfStrings;
		string a[100];
		for(int i = 0; i < numOfStrings; i++){
			cin >> a[i];
		}
		sort(a, a+numOfStrings, myCompare);
		for(int i = 0; i < numOfStrings; i++){
			cout << a[i];
		}
        cout << endl;
	}
	return 0;
}

// CODE FROM TUTORIAL
/*
//C++ Solution


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);

    // then append X at the end of Y
    string YX = Y.append(X);

    // Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;
}
int main(int argc, char* argv[])
{
    int t;
    int n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<string> arr;
        for(int i=0;i<n;i++) {
            string temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end(), myCompare);
        for(int i=0;i<n;i++) {
            cout<<arr[i];
        }
        cout<<endl;
    }

    return 0;
}
// Java Solution


public class Main {
   public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

        int tc = scn.nextInt();

        while (tc > 0) {
            int n = scn.nextInt();

            int[] arr = new int[n];

            for (int i = 0; i < arr.length; i++) {
                arr[i] = scn.nextInt();
            }

            sort(arr);

            display(arr);
            tc--;
        }
    }

    public static void display(int[] arr) {

        for (int val : arr) {
            System.out.print(val + "");
        }

        System.out.println();
    }

    public static int[] takeInput() {
        int len = scan.nextInt();
        int[] arr = new int[len];
        for (int i = 0; i < len; i++) {
            arr[i] = scan.nextInt();
        }
        return arr;
    }

    public static void sort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (compare(arr[j], arr[j + 1]) > 0) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static int compare(int n1, int n2) {
        String val1 = n1 + "" + n2;
        String val2 = n2 + "" + n1;

        int val1int = Integer.valueOf(val1);
        int val2int = Integer.valueOf(val2);

        if (val1int > val2int)
            return -1;
        else
            return 1;
    }

}
*/