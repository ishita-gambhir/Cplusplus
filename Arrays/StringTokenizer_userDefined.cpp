//implementation of the string tokenizer function using dynamic memory allocation - synamic arrays and string pointers

#include<iostream>
#include<string>
using namespace std;
char * mystrtok(char str[], char delimiter){
	int i;
	static char* input = NULL;
	if(str != NULL){
		input = str;
	}
	if(input == NULL){
		return NULL;
	}
	char* output = new char[strlen(input) + 1];

	for(i = 0; input[i] != '\0'; i++){
		if(input[i] != delimiter){
			output[i] = input[i];
		}
		else{
			output[i] = '\0';
			input = input + i + 1;
			return output;
		}
	}
	output[i] = '\0';
	input = NULL;
	return output;
}
int main(){
	char str[] = "Hi, this is a sample string.";
	//string str;
	//getline(cin, str);
	char *ptr;
	ptr = mystrtok(str, ' '); // TO DO!!! sending a string of delimiters.
	cout << ptr << endl;
	while(ptr != NULL){
		ptr = mystrtok(NULL, ' ');
		cout << ptr << endl;
	}
}