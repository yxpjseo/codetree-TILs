#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int n, cnt, result;
int arr[MAX];

int main() {
    // Please write your code here.
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(i>=1 && arr[i]*arr[i-1]>0){
            cnt++;
        }
        else{
            cnt=1;
        }

        result=max(result, cnt);
    }

    cout << result;

    return 0;
}