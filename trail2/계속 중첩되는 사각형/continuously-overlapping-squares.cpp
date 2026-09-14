#include <iostream>
#define OFFSET 100
#define MAX 201

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
int space[MAX][MAX];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;
    }

    // Please write your code here.
    //i=짝수 -> 빨강 1
    //i=홀수 -> 파랑 2
    for(int i=0; i<n; i++){
        for(int x=x1[i]; x<x2[i]; x++){
            for(int y=y1[i]; y<y2[i]; y++){
                if(i%2==0) space[x][y]=1;
                else space[x][y]=2;
            }
        }
    }

    int cnt=0;
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            if(space[i][j]==2) cnt++;
        }
    }

    cout << cnt;

    return 0;
}