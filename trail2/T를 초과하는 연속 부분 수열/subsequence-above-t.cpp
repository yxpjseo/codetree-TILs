#include <iostream>
#include <algorithm>
using namespace std;

int n, t, cnt, result;
int arr[1000];

int main() {
    // Please write your code here.
    cin >> n >> t;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]<=t) cnt=0;
        else cnt++;

        result = max(result, cnt);
    }
    
    cout << result;

    return 0;
}