#include <stdio.h>

int main() {
    // Please write your code here.
    int a[12];
    scanf("%d %d",&a[0],&a[1]);
    for(int i=2;i<10;i++){
        a[i]=(a[i-1]+a[i-2])%10;
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    return 0;
}