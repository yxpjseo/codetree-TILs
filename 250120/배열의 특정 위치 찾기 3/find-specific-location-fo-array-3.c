#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100];
    int i;
    for(i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0) break;
    }
    printf("%d",arr[i-3]+arr[i-2]+arr[i-1]);
    return 0;
}