#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100],i;
    for(i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0) break;
    }
    for(int j=0;j<i;j++){
        if(arr[j]%2==1) printf("%d ",arr[j]+3);
        else printf("%d ",arr[j]/2);
    }
    return 0;
}