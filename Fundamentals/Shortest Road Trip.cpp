/*
A person wants to go from origin to a particular location, he can move in only 4 directions(i.e. North, East, South and West).
But his friend gave him a long route, so help him found the minimus moves so he can reach his destination.
input 1: NESNWES
output 1: E
You need to print the lexicographically sorted string. Assume the stirng will have only 'N', 'E', 'S' and 'W' characters.
input 2: SSSNEEEW
output 2: EESS
*/
#include<iostream>
using namespace std;
int main(){
	int i = 0, j = 0;
	char ch = 'N';
	while(ch != '\n'){
		ch = cin.get();
		switch(ch){
			case 'N': j++; break;
			case 'S': j--; break;
			case 'E': i++; break;
			case 'W': i--; break;
		}
	}
	if(i > 0){
		ch = 'E';
		while(i != 0){
			cout << ch;
			i--;
		}
	}
	if(j > 0){
		ch = 'N';
		while(j != 0){
			cout << ch;
			j--;
		}
	}
	if(j < 0){
		ch = 'S';
		while(j != 0){
			cout << ch;
			j++;
		}
	}
	if(i < 0){
		ch = 'W';
		while(i != 0){
			cout << ch;
			i++;
		}
	}
	return 0;
}