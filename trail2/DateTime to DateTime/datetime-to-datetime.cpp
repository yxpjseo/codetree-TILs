#include <iostream>
using namespace std;

int a, b, c;

int minute (int d, int h, int m){
    int result;
    result = d*24*60 + h*60 + m;
    return result;
}

int main() {
    // Please write your code here.
    cin >> a >> b >> c;

    int result = minute(a,b,c) - minute(11,11,11);

    if(result>=0){
        cout << result;
    } else {
        cout << -1;
    }

    return 0;
}