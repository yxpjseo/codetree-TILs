#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int check[2001];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int index=1000;
    int distance=0;
    // Please write your code here.
    for (int i=0; i<n; i++) {
        if(dir[i]=='R'){
            distance=index+x[i];
        }
        else {
            distance=index-x[i];
        }

        if(index<=distance){
            for(int j=index; j<distance; j++){
                check[j]++;
            }
        }
        else {
            for(int j=distance; j<index; j++){
                check[j]++;
            }
        }
        index=distance;
    }

    int cnt=0;
    for (int i=0; i<2001; i++){
        if(check[i]>1){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}