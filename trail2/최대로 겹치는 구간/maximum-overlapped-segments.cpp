#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    int l[201]={0};
    int max=0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        x1[i]+=100;
        x2[i]+=100;
    }

    // Please write your code here.
    for (int i=0; i<n; i++){
        for(int j=x1[i]; j<x2[i]; j++) {
            l[j]++;
        }
    }

    for (int i=0; i<201; i++){
        if(max < l[i]) {
            max=l[i];
        }
    }

    cout << max;


    return 0;
}