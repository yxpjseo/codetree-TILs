#include <iostream>
using namespace std;

int a, b, num, cnt;
string n;
int arr[9];
int result[9];

int main() {
    
    cin >> a >> b >> n;

    for(int i=0; i<n.length(); i++){
        arr[i]=n[i]-'0';
    }

    for(int i=0; i<n.length(); i++){
        num = num * a + arr[i];
    }

    while(true){
        if(num<b){
            result[cnt]=num;
            break;
        }

        result[cnt++]=num%b;
        num/=b;
    }

    for(int i=cnt; i>=0; i--){
        cout << result[i];
    }


    return 0;
}