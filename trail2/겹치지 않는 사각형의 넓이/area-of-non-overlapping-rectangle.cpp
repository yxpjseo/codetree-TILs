#include <iostream>
#define MAX 2001
#define OFFSET 1000

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int space[MAX][MAX];
int cnt;

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    for(int i=0; i<=2; i++){
        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;
    }

    for(int i=0; i<=2; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                if(i==2){
                    space[j][k]+=2;
                }
                else {
                    space[j][k]+=1;
                }
            }
        }
    }

    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            if(space[i][j]==1) cnt++;
        }
    }

    cout << cnt;

    return 0;
}