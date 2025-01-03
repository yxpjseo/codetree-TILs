#include <stdio.h>

int main() {
    // Please write your code here.
    int n,cnt=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}