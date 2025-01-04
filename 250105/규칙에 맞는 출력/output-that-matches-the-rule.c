#include <stdio.h>

int main() {
    // Please write your code here.
    int n,cnt;
    scanf("%d",&n);
    cnt=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                printf("%d ",cnt);
                cnt++;
            }
        }
        printf("\n");
        cnt=n-(i+1);
    }
    return 0;
}