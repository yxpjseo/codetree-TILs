#include <iostream>

#define MAX 2000
#define OFFSET 1000

using namespace std;

int n;
int x1[100];
int x2[100];
int check[MAX+1];

int main() {
    int cur=0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int distance;
        char direction;
        cin >> distance >> direction;

        if(direction =='L'){
            x1[i]=cur-distance;
            x2[i]=cur;
            cur-=distance;
        }
        else{
            x1[i]=cur;
            x2[i]=cur+distance;
            cur+=distance;
        }

        x1[i]+=OFFSET;
        x2[i]+=OFFSET;
    }

    // Please write your code here.
    for(int i=0; i<n; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            check[j]++;
        }
    }

    int cnt=0;
    for(int i=0; i<=MAX; i++){
        if(check[i]>1){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}