/*
Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 
Input Format:
Take N as input.

Constraints:
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1
************1 
********2 1***1 2 
    3 2 1*******1 2 3 
4 3 2 1***********1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1
*/
#include<iostream>
using namespace std;
int main(){
	int numberOfRows = 0, s1 = 0, s2 = 0, printVal = 0, i = 1, j = 0, x = 1;
	cin >> numberOfRows;
	s1 = 2 * (numberOfRows - 1);
	s2 = -2;
	while(i <= (numberOfRows / 2) + 1){
		for(j = 1; j <= s1; j++){
			cout << " ";
		}
		for(j = x; j >= 1; j--){
			cout << j << " ";
		}
		for(j = 1; j <= s2; j++){
			cout << " ";
		}
		if(x != 1){
			for(j = 1; j <= x; j++){
				cout << j << " ";
			}
		}
		cout << endl;
		x++;
		s1 -= 4;
		s2 += 4;
		i++;
	}
	x -= 2;
	s1 += 8;
	s2 -= 8;
	//cout << i <<endl<< s1<<endl << s2<<endl << x;
	while(i <= numberOfRows){
		for(j = 1; j <= s1; j++){
			cout << " ";
		}
		for(j = x; j >= 1; j--){
			cout << j << " ";
		}
		for(j = 1; j <= s2; j++){
			cout << " ";
		}
		if(x != 1){
			for(j = 1; j <= x; j++){
				cout << j << " ";
			}
		}
		cout << endl;
		s1 += 4;
		s2 -= 4;
		x--;
		i++;
	}
	return 0;
}