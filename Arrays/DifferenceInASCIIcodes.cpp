/*
Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format:
String

Constraints:
Length of String should be between 2 to 1000.

Output Format
String

Sample Input
acb
Sample Output
a2c-1b
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string originalString, updatedString, temp;
    int i;
    getline(cin, originalString);
    for(i = 0; i < originalString.size() - 1; i++){
        updatedString.push_back(originalString[i]);
        temp = to_string(int(originalString[i+1]) - int(originalString[i]));
        //cout << temp << " ";
        updatedString.append(temp);
    }
    updatedString.push_back(originalString[i]);
    cout << updatedString;
    return 0;
}