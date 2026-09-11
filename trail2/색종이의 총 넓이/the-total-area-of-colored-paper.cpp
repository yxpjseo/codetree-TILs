#include <iostream>
#define MAX 201
#define OFFSET 100
#define DIS 8

using namespace std;

int N;
int x[100], y[100];
int space[MAX][MAX];
int cnt;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        x[i]+=OFFSET;
        y[i]+=OFFSET;
    }

    // Please write your code here.
    for(int i=0; i<N; i++){
        for(int j=x[i]; j<x[i]+DIS; j++){
            for(int k=y[i]; k<y[i]+DIS; k++){
                space[j][k]++;
            }
        }
    }

    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            if(space[i][j]!=0) cnt++;
        }
    }

    cout << cnt;

    return 0;
}