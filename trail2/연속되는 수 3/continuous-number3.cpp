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
        if(arr[i]==0){
            cnt=1;
        }
        else if(arr[i]*arr[i-1]<0){
            result=max(result, cnt);
            cnt=1;
        }
        else{
            cnt++;
        }
    }
    result=max(result, cnt);

    cout << result;

    return 0;
}