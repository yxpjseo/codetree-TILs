#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=250){
            sum=0;
            for(int j=0; j<i; j++)
                sum+=arr[j];
            printf("%d %.1lf",sum,(double)sum/i);
            return 0;
        }
        sum+=arr[i];
    }
    printf("%d %.1lf",sum,(double)sum/10);
    return 0;
}