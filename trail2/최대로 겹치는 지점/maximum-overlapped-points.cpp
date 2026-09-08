#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int check[101];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        for(int j=x1[i]; j<=x2[i]; j++){
            check[j]++;
        }
    }

    int max=0;
    for (int i=1; i<=100; i++){
        if(max < check[i]){
            max=check[i];
        }
    }

    cout << max;

    return 0;
}