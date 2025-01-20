#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) 
            printf("%d ",arr[i]);
    }
    return 0;
}