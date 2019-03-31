/*
Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

Input Format:
A single String S

Constraints:
1 < = length of String < = 100

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1
*/
#include <string>
#include <iostream>
using namespace std;
int main() {
    std::string s, compressed, fstr;
    int i, freq = 0, flag = 1;;
    char currentChar;
    getline(cin, s);
    for(i = 0; i < s.size(); i++){
        if(flag == 1){
            currentChar = s[i];
            freq = 1;
            flag = 2;
        }
        else{
            if(s[i] == currentChar){
                freq++;
            }
            else{
                compressed.push_back(currentChar);
                fstr = std::to_string(freq);
                compressed.append(fstr);
                flag = 1;
                freq = 0;
                i--;
            }
        }
    }
    compressed.push_back(currentChar);
    fstr = std::to_string(freq);
    compressed.append(fstr);
    cout << compressed;
    return 0;
}
