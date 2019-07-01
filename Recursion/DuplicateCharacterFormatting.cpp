/*
Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

Input Format:
Enter a String

Constraints:
None

Output Format
Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

Sample Input
hello
Sample Output
hel*lo
*/
#include <iostream>
#include <string>
using namespace std;
void duplicateCharFormatting(string &str, int i = 0){
    if(i >= str.length() - 1){
        return;
    }
    if(str[i] == str[i+1]){
        str.insert(i+1, 1, '*');
    }
    duplicateCharFormatting(str, i+1);
}
int main() {
    string str;
    cin >> str;
    duplicateCharFormatting(str);
    cout << str;
}