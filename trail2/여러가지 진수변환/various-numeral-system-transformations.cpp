#include <iostream>
using namespace std;

int n, b, cnt;
int digits[11];

int main() {
    // Please write your code here.
    cin >> n >> b;

    while (true){
        if(n<b){
            digits[cnt]=n;
            break;
        }

        digits[cnt++] = n%b;
        n/=b;
    }

    for(int i=cnt; i>=0; i--){
        cout << digits[i];
    }
    
    return 0;
}