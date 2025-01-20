#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum1=0,sum2=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i+=2) sum1+=arr[i];
    for(int i=1;i<10;i+=2) sum2+=arr[i];
    if(sum1>sum2) printf("%d",sum1-sum2);
    else printf("%d",sum2-sum1);
    return 0;
}