#include <iostream>

using namespace std;

char binary[9];
int num;

int main() {
    cin >> binary;

    // Please write your code here.
    for(int i=0; binary[i]!='\0'; i++){
        num= num*2+binary[i]-'0';
    }

    cout << num;
    return 0;
}