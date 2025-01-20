#include <stdio.h>

int main() {
    // Please write your code here.
    int n,i,arr[100];
    scanf("%d",&n);
    arr[0]=1;
    arr[1]=n;
    for(i=2;i<100;i++){
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]>=100) break;
    }
    for(int j=0;j<=i;j++) printf("%d ",arr[j]);
    return 0;
}