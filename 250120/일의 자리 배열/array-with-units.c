#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[12];
    scanf("%d %d",&a[0],&a[1]);
    for(int i=2;i<12;i++){
        a[i]=(a[i-1]+a[i-2])%10;
    }
    for(int i=0;i<12;i++) printf("%d ",arr[i]);
    return 0;
}