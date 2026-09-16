#include <iostream>

using namespace std;

int n;
int digits[29];
int cnt;

int main() {
    cin >> n;

    while(true){
        if(n<2){
            digits[cnt]=n;
            break;
        }

        digits[cnt++]=n%2;
        n/=2;
    }

    for(int i=cnt; i>=0; i--){
        cout << digits[i];
    }

    return 0;
}