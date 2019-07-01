#include<iostream>
using namespace std;
int main() {
    int Queries;
    cin >> Queries;
    while(Queries--){
        int a, b;
        cin >> a >> b;
        int totalSetbits = 0;
        for(int num = a; num <= b; num++){
            //cout << num << ": ";
            int temp = num;
            while(temp){
                totalSetbits += (temp & 1);
                temp = temp >> 1;
            }
            //cout << totalSetbits << endl;
        }
        cout << totalSetbits << endl;
    }
	return 0;
}