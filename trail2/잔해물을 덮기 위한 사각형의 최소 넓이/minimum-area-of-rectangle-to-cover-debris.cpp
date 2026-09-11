#include <iostream>
#include <algorithm>

#define MAX 2001
#define OFFSET 1000

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int space[MAX][MAX];
int a1=MAX, b1=MAX;
int a2=-1 ,b2=-1;

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    for(int i=0; i<=1; i++){
        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;
    }

    // Please write your code here.
    for(int i=0; i<=1; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                space[j][k]+=(i+1);
            }
        }
    }

    int min_x=MAX, max_x=0, min_y=MAX, max_y=0;
    bool first_rect_exist=false;
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            if(space[i][j]==1){
                first_rect_exist=true;
                min_x=min(min_x, i);
                max_x=max(max_x, i);
                min_y=min(min_y, j);
                max_y=max(max_y, j);
            }
        }
    }

    int area;
    if(first_rect_exist){
        area=(max_x-min_x+1)*(max_y-min_y+1);
    }
    else{
        area=0;
    }

    cout << area;

    return 0;
}