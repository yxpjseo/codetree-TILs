#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("(%d, %d) ",i,j);
            if((i+j)%4==0) printf("\n");
        }
    }
    return 0;
}