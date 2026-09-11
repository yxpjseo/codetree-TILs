#include <iostream>
#define MAX 201

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int space[MAX][MAX];
int cnt;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i]+=100;
        y1[i]+=100;
        x2[i]+=100;
        y2[i]+=100;
    }

    for (int i=0; i<10; i++){
        for (int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                space[j][k]++;
            }
        }
    }

    for (int i=0; i<MAX; i++){
        for (int j=0; j<MAX; j++){
            if(!space[i][j]==0){
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}