#include <iostream>
#define MAX 1000
using namespace std;

int a[MAX];
int result, cnt;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]!=0 && a[i]!=a[i-1]){
            if(cnt>result) result=cnt;
            cnt=0;
        }
        cnt++;
    }
    
    if(cnt>result) result=cnt;

    cout << result;
    return 0;
}