#include <iostream>
#include <string>
using namespace std;

int num, cnt;
string n;
int binary[10];
int result[10];

int main() {

    cin >> n;

    for(int i=0; i<n.length(); i++) {
        binary[i]=n[i]-'0';
    }

    for(int i=0; i<n.length(); i++){
        num = num*2 + binary[i];
    }

    num*=17;

    while(true){
        if(num<2){
            result[cnt]=num;
            break;
        }

        result[cnt++]=num%2;
        num/=2;
    }

    for(int i=cnt; i>=0; i--){
        cout << result[i];
    }


    return 0;
}