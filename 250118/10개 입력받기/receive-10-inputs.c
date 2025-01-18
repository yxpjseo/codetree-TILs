#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0,i;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(arr[i]==0) break;
    }
    printf("%d %.1lf",sum,(double)sum/i);
    return 0;
}