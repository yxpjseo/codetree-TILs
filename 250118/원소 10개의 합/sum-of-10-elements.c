#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}