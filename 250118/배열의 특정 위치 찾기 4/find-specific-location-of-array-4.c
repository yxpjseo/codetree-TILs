#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0,cnt=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0) break;
        else if(arr[i]%2==0){
            cnt++;
            sum+=arr[i];
        }
    }
    printf("%d %d",cnt,sum);
    return 0;
}