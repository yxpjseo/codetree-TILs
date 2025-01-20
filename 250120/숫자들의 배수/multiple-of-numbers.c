#include <stdio.h>

int main() {
    // Please write your code here.
    int n,cnt=0,arr[10];
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]=n*(i+1);
        printf("%d ",arr[i]);
        if(arr[i]%5==0) cnt++;
        if(cnt==2) break;
    }
    return 0;
}