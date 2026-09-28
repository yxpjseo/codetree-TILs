#include <iostream>
#include <algorithm>
using namespace std;

int n, cnt, result;
int arr[1000];

int main() {
    // Please write your code here.
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(i==0 || arr[i-1]>=arr[i]){
            cnt=1;
        }
        else cnt++;

        result=max(cnt, result);
    }

    cout << result;

    return 0;
}